#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QWidget>

class FramelessHelper;
class QPushButton;

namespace Ui
{
class frmMain;
}

class frmMain : public QWidget
{
    Q_OBJECT

public:
    explicit frmMain(QWidget *parent = 0);
    ~frmMain();

protected:
    bool eventFilter(QObject *watched, QEvent *event);

private:
    Ui::frmMain *ui;
    FramelessHelper *frameless;
    QList<QPushButton *> btns;

private slots:
    void initForm();
    void initText();
    void initNav();
    void initIcon();
    void buttonClicked();
    void initStyle();

private slots:
    void on_btnMenu_Min_clicked();
    void on_btnMenu_Max_clicked();
    void on_btnMenu_Close_clicked();

signals:
    void setIndex(int index);
    void changeStyle();
};

#endif // FRMMAIN_H
