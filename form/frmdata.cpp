#include "frmdata.h"
#include "ui_frmdata.h"
#include "quiwidget.h"
#include "iconfont.h"

frmData::frmData(QWidget *parent) : QWidget(parent), ui(new Ui::frmData)
{
    ui->setupUi(this);
    this->initForm();
    this->initNav();
    this->initIcon();
}

frmData::~frmData()
{
    delete ui;
}

void frmData::initForm()
{
    ui->widgetLeft->setProperty("flag", "btn");
    ui->widgetLeft->setFixedWidth(150);
}

void frmData::initNav()
{
    QList<QString> texts;
    btns << ui->btnDataNode << ui->btnDataAlarm << ui->btnDataUser;
    texts << "运 行 记 录" << "报 警 记 录" << "操 作 记 录";

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

    ui->btnDataAlarm->click();
}

void frmData::initIcon()
{
    //从图形字体库中设置图标
    ui->btnDataNode->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xea44, 20, 30, 20));
    ui->btnDataAlarm->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xea5b, 20, 30, 20));
    ui->btnDataUser->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xea59, 20, 30, 20));
}

void frmData::buttonClicked()
{
    QPushButton *btn = (QPushButton *)sender();
    int index = btns.indexOf(btn);
    ui->stackedWidget->setCurrentIndex(index);

    //取消其他按钮选中
    foreach (QPushButton *b, btns) {
        b->setChecked(b == btn);
    }
}
