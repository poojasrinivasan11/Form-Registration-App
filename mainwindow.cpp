#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QValidator>
#include <QButtonGroup>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
        QMessageBox::information(this,"POOJA","212218108041 SUCCESSFULLY COMPLETED");
}



void MainWindow::on_lineEdit_5_returnPressed()
{
    if(ui->lineEdit_5->text().length()>10)
               QMessageBox::information(this,"POOJA 212218108041","size over write!");

}



void MainWindow::on_radioButton_2_clicked()
{
    QButtonGroup group;
    QList<QRadioButton *>allButtons;
    qDebug() <<allButtons.size();
    for(int i=0;i<allButtons.size();++i)
    {
        group.addButton(allButtons[i],i);
    }
    qDebug() <<group.checkedId();
    qDebug() <<group.checkedButton();

}


void MainWindow::on_pushButton_2_clicked()
{
    foreach(QLineEdit* widget, findChildren<QLineEdit*>())
    {
        widget->clear();
    }

}



void MainWindow::on_lineEdit_4_returnPressed()
{
    QRegularExpression re("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$");
            QRegularExpressionMatch match = re.match(ui->lineEdit_3->text());
            bool hasMatch = match.hasMatch();
            if (!hasMatch)
            {
               QMessageBox::information(this,"Pooja 212218108041","Invalid Format");
            }

}
