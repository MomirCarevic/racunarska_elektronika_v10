#include <wiringPi.h>
#include <lcd.h>

#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_Text2LCD_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
