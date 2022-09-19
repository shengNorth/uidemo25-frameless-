#include "frmmain.h"
#include "ui_frmmain.h"
#include "quiwidget.h"
#include "iconfont.h"
#include "appinit.h"
#include "framelesshelper.h"

#include "frmview.h"
#include "frmdata.h"
#include "frmconfig.h"

frmMain::frmMain(QWidget *parent) : QWidget(parent), ui(new Ui::frmMain)
{
    ui->setupUi(this);
    this->initForm();
    this->initText();
    this->initNav();
    this->initIcon();
    QUIHelper::setFormInCenter(this);
    on_btnMenu_Max_clicked();
}

frmMain::~frmMain()
{
    delete ui;
}

bool frmMain::eventFilter(QObject *watched, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonDblClick) {
        //双击标题栏最大化
        if (watched == ui->widgetTop) {
            on_btnMenu_Max_clicked();
        }
    }

    return QWidget::eventFilter(watched, event);
}

void frmMain::initForm()
{
    ui->widgetMain->setProperty("form", true);
    ui->widgetTop->setProperty("form", "title");
    ui->widgetTop->setFixedHeight(80);
    ui->bottomWidget->setFixedHeight(25);

    this->setProperty("form", true);
    //this->setProperty("canMove", true);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
    ui->widgetTop->installEventFilter(this);
    ui->labLogoBg->installEventFilter(this);

    //设置右上角菜单,图形字体
    IconHelper::Instance()->setIcon(ui->btnMenu_Min, QUIConfig::IconMin);
    IconHelper::Instance()->setIcon(ui->btnMenu_Max, QUIConfig::IconNormal);
    IconHelper::Instance()->setIcon(ui->btnMenu_Close, QUIConfig::IconClose);

    //无边框可拉伸类
    frameless = new FramelessHelper(this);
    //激活当前窗体
    frameless->activateOn(this);
    //设置窗体的标题栏高度
    frameless->setTitleHeight(ui->widgetTop->height());
    //设置窗体可移动
    frameless->setWidgetMovable(true);
    //设置窗体可缩放
    frameless->setWidgetResizable(true);

    //设置底部状态栏
    ui->bottomWidget->setVersion("V20190310");
    ui->bottomWidget->setCurrentUserName("Admin");
    ui->bottomWidget->setCurrentUserType("管理员");
    ui->bottomWidget->setFontName(QUIConfig::FontName);
    int fontSize = (QUIConfig::FontSize > 12 ? QUIConfig::FontSize - 1 : QUIConfig::FontSize);
    ui->bottomWidget->setFontSize(fontSize);
    ui->bottomWidget->setLineFixedWidth(true);
    ui->bottomWidget->start();

    //添加换肤菜单
    QStringList styleNames;
    styleNames << "银色" << "蓝色" << "浅蓝色" << "深蓝色" << "灰色" << "浅灰色" << "深灰色" << "黑色"
               << "浅黑色" << "深黑色" << "PS黑色" << "黑色扁平" << "白色扁平" << "蓝色扁平" << "紫色" << "黑蓝色" << "视频黑";
    this->setContextMenuPolicy(Qt::ActionsContextMenu);

    foreach (QString styleName, styleNames) {
        QAction *action = new QAction(styleName, this);
        connect(action, SIGNAL(triggered(bool)), this, SLOT(initStyle()));
        this->addAction(action);
    }
}

void frmMain::initText()
{
    //从配置文件读取logo名称
    ui->labLogoCn->setText("综合安全管理平台");
    ui->labLogoEn->setText("security management system");
    this->setWindowTitle(ui->labLogoCn->text());

    //设置标题+版本+版权
    ui->bottomWidget->setTitle("综合安全管理平台");
    ui->bottomWidget->setAuthor("上海某某有限公司");
}

void frmMain::initNav()
{
    frmView *view = new frmView;
    ui->stackedWidget->addWidget(view);

    frmData *data = new frmData;
    ui->stackedWidget->addWidget(data);

    frmConfig *config = new frmConfig;
    ui->stackedWidget->addWidget(config);

    connect(this, SIGNAL(setIndex(int)), view, SLOT(setIndex(int)));
    connect(this, SIGNAL(changeStyle()), this, SLOT(initIcon()));
    connect(this, SIGNAL(changeStyle()), data, SLOT(initIcon()));
    connect(this, SIGNAL(changeStyle()), config, SLOT(initIcon()));

    QList<QString> texts;
    btns << ui->btnViewDevice << ui->btnViewMap << ui->btnViewData << ui->btnData << ui->btnConfig;
    texts << "设备监控" << "地图监控" << "数据监控" << "数据查询" << "系统设置";

    for (int i = 0; i < btns.count(); i++) {
        QPushButton *btn = (QPushButton *)btns.at(i);
        btn->setIconSize(QSize(25, 20));
        btn->setFixedWidth(115);
        btn->setCheckable(true);
        btn->setText(texts.at(i));
        connect(btn, SIGNAL(clicked(bool)), this, SLOT(buttonClicked()));
    }

    ui->btnViewData->click();
}

void frmMain::initIcon()
{
    //如果logo图片不存在则隐藏标签,否则显示logo图片
    ui->labLogoBg->setAlignment(Qt::AlignCenter);
    QPixmap pixLogo(QUIHelper::appPath() + "/" + "bg.png");
    if (pixLogo.isNull()) {
        //ui->labLogoBg->setVisible(false);
        //设置图形字体作为logo
        int size = 60;
        ui->labLogoBg->setFixedWidth(size + 20);
        IconFont::Instance()->setIcon(ui->labLogoBg, 0xe6f2, size);
    } else {
        int size = 150;
        ui->labLogoBg->setFixedWidth(size + 20);
        pixLogo = pixLogo.scaled(size, size, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->labLogoBg->setPixmap(pixLogo);
    }

    //从图形字体库中设置图标
    ui->btnViewDevice->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xea00, 20, 20, 20));
    ui->btnViewMap->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe695, 20, 20, 20));
    ui->btnViewData->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe60a, 20, 20, 20));
    ui->btnData->setIcon(IconHelper::Instance()->getPixmap(QUIConfig::TextColor, 0xf002, 20, 20, 20));
    ui->btnConfig->setIcon(IconHelper::Instance()->getPixmap(QUIConfig::TextColor, 0xf085, 20, 20, 20));
}

void frmMain::buttonClicked()
{
    QPushButton *btn = (QPushButton *)sender();
    if (btn == ui->btnViewDevice) {
        emit setIndex(0);
        ui->stackedWidget->setCurrentIndex(0);
    } else if (btn == ui->btnViewMap) {
        emit setIndex(1);
        ui->stackedWidget->setCurrentIndex(0);
    } else if (btn == ui->btnViewData) {
        emit setIndex(2);
        ui->stackedWidget->setCurrentIndex(0);
    } else if (btn == ui->btnData) {
        ui->stackedWidget->setCurrentIndex(1);
    } else if (btn == ui->btnConfig) {
        ui->stackedWidget->setCurrentIndex(2);
    }

    //取消其他按钮选中
    foreach (QPushButton *b, btns) {
        b->setChecked(b == btn);
    }
}

void frmMain::initStyle()
{
    QAction *act = (QAction *)sender();
    QString name = act->text();
    QString qssFile = ":/qss/lightblue.css";

    if (name == "银色") {
        qssFile = ":/qss/silvery.css";
    } else if (name == "蓝色") {
        qssFile = ":/qss/blue.css";
    } else if (name == "浅蓝色") {
        qssFile = ":/qss/lightblue.css";
    } else if (name == "深蓝色") {
        qssFile = ":/qss/darkblue.css";
    } else if (name == "灰色") {
        qssFile = ":/qss/gray.css";
    } else if (name == "浅灰色") {
        qssFile = ":/qss/lightgray.css";
    } else if (name == "深灰色") {
        qssFile = ":/qss/darkgray.css";
    } else if (name == "黑色") {
        qssFile = ":/qss/black.css";
    } else if (name == "浅黑色") {
        qssFile = ":/qss/lightblack.css";
    } else if (name == "深黑色") {
        qssFile = ":/qss/darkblack.css";
    } else if (name == "PS黑色") {
        qssFile = ":/qss/psblack.css";
    } else if (name == "黑色扁平") {
        qssFile = ":/qss/flatblack.css";
    } else if (name == "白色扁平") {
        qssFile = ":/qss/flatwhite.css";
    } else if (name == "蓝色扁平") {
        qssFile = ":/qss/flatblue.css";
    } else if (name == "紫色") {
        qssFile = ":/qss/purple.css";
    } else if (name == "黑蓝色") {
        qssFile = ":/qss/blackblue.css";
    } else if (name == "视频黑") {
        qssFile = ":/qss/blackvideo.css";
    }

    AppInit::Instance()->initStyle(qssFile);
    emit changeStyle();
}

void frmMain::on_btnMenu_Min_clicked()
{
    this->showMinimized();
}

void frmMain::on_btnMenu_Max_clicked()
{
    static bool max = false;
    static QRect location = this->geometry();

    if (max) {
        this->setGeometry(location);
    } else {
        location = this->geometry();
        this->setGeometry(qApp->desktop()->availableGeometry());
    }

    IconHelper::Instance()->setIcon(ui->btnMenu_Max, max ? QUIConfig::IconNormal : QUIConfig::IconMax);
    this->setProperty("canMove", max);
    max = !max;
    frameless->setWidgetMovable(!max);
    frameless->setWidgetResizable(!max);
}

void frmMain::on_btnMenu_Close_clicked()
{
    this->close();
}
