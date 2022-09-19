#include "frmconfig.h"
#include "ui_frmconfig.h"
#include "quiwidget.h"
#include "iconfont.h"

frmConfig::frmConfig(QWidget *parent) : QWidget(parent), ui(new Ui::frmConfig)
{
    ui->setupUi(this);
    this->initForm();
    this->initNav();
    this->initIcon();
}

frmConfig::~frmConfig()
{
    delete ui;
}

void frmConfig::initForm()
{
    ui->widgetLeft->setProperty("flag", "btn");
    ui->widgetLeft->setFixedWidth(150);
}

void frmConfig::initNav()
{
    QList<QString> texts;
    btns << ui->btnConfigSystem << ui->btnConfigPort << ui->btnConfigDevice << ui->btnConfigNode << ui->btnConfigMap << ui->btnConfigPosition << ui->btnConfigUser << ui->btnConfigDebug;
    texts << "基 本 设 置" << "端 口 管 理" << "控制器管理" << "探测器管理" << "地 图 管 理" << "位 置 调 整" << "用 户 管 理" << "设 备 调 试";

    //这里临时用qlabel加粗显示,可以改成自己的widget窗体
    QString qss = "font:80pt;";
    for (int i = 0; i < btns.count(); i++) {
        QLabel *lab = new QLabel;
        lab->setAlignment(Qt::AlignCenter);
        lab->setText(texts.at(i));
        lab->setStyleSheet(qss);
        lab->setAutoFillBackground(true);
        ui->stackedWidget->addWidget(lab);
    }

    for (int i = 0; i < btns.count(); i++) {
        QPushButton *btn = (QPushButton *)btns.at(i);
        btn->setIconSize(QSize(30, 20));
        btn->setCheckable(true);
        btn->setText(texts.at(i) + "  ");
        connect(btn, SIGNAL(clicked(bool)), this, SLOT(buttonClicked()));
    }

    ui->btnConfigDevice->click();
}

void frmConfig::initIcon()
{
    //从图形字体库中设置图标
    ui->btnConfigSystem->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe60d, 20, 30, 20));
    ui->btnConfigPort->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe9c1, 20, 30, 20));
    ui->btnConfigDevice->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xea00, 20, 30, 20));
    ui->btnConfigNode->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe603, 20, 30, 20));
    ui->btnConfigMap->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe6a3, 20, 30, 20));
    ui->btnConfigPosition->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe702, 20, 30, 20));
    ui->btnConfigUser->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xea59, 20, 30, 20));
    ui->btnConfigDebug->setIcon(IconHelper::Instance()->getPixmap(QUIConfig::TextColor, 0xf188, 20, 30, 20));
}

void frmConfig::buttonClicked()
{
    QPushButton *btn = (QPushButton *)sender();
    int index = btns.indexOf(btn);
    ui->stackedWidget->setCurrentIndex(index);

    //取消其他按钮选中
    foreach (QPushButton *b, btns) {
        b->setChecked(b == btn);
    }
}
