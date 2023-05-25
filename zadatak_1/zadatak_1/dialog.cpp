#include "dialog.h"
#include "ui_dialog.h"

#include <QLineEdit>
#include <QString>
#include <QPushButton>
#include <QMessageBox>

const int RS = 3;
const int EN = 14;
const int D0 = 4;
const int D1 = 12;
const int D2 = 13;
const int D3 = 6;

int lcd_h;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    wiringPiSetup();
    lcd_h = lcdInit(2,16,4,RS,EN,D0,D1,D2,D3,D0,D1,D2,D3);

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
    lcdPrintf(lcd_h,red1.toStdString().c_str());
    lcdPosition(lcd_h,0,1);
    lcdPrintf(lcd_h,red2.toStdString().c_str());
}

