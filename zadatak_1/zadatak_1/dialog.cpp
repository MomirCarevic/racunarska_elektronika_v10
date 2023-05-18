#include "dialog.h"
#include "ui_dialog.h"

#include <QLineEdit>
#include <QString>
#include <QPushButton>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_Text2LCD_clicked()
{
    lcdClear(lcd_h);

    QString red1=ui->lineEdit->text();
    QString red2=ui->lineEdit->text();

    lcdPosition(lcd_h,0,0);
    lcdPrintf(lcd_h,red1);
    lcdPosition(lcd_h,0,1);
    lcdPrintf(lcd_h,red2);
}

