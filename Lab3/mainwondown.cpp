#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"
#include "QImage"
#include "QPixmap"
#include <iostream>
#include <QTime>
#include <QTimer>
#include <QThread>
#include <string>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix_dark("/home/nvidia/Documents/lab3/lab3/bulb_dark.png");
    QPixmap pix_light("/home/nvidia/Documents/lab3/lab3/bulb_light.png");
    ui->label_1->setPixmap(pix_dark);
    ui->label_2->setPixmap(pix_dark);
    ui->label_3->setPixmap(pix_dark);
    ui->label_4->setPixmap(pix_dark);
    timer = new QTimer;
    connect(timer, SIGNAL(timeout()),SLOT(blink()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
}

void MainWindow::S_showMsg()
{
    static int num;
    ui->label_5->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss zzz"));
    if(+num == 5)
        timer ->setInterval(1);
}

void MainWindow::S_displayTime()
{
    ui->label_6->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss zzz"));
}
void MainWindow::on_pushButton_1_clicked()
{
    QPixmap pix_dark("/home/nvidia/Documents/lab3/lab3/bulb_dark.png");
    QPixmap pix_light("/home/nvidia/Documents/lab3/lab3/bulb_light.png");
    if(ui->checkBox_1->isChecked())
    {
      ui->label_1->setPixmap(pix_light);
    }
    else
    {
      ui->label_1->setPixmap(pix_dark);
    }
    if(ui->checkBox_2->isChecked())
    {
      ui->label_2->setPixmap(pix_light);
    }
    else
    {
      ui->label_2->setPixmap(pix_dark);
    }
    if(ui->checkBox_3->isChecked())
    {
      ui->label_3->setPixmap(pix_light);
    }
    else
    {
      ui->label_3->setPixmap(pix_dark);
    }
    if(ui->checkBox_4->isChecked())
    {
      ui->label_4->setPixmap(pix_light);
    }
    else
    {
      ui->label_4->setPixmap(pix_dark);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QString input = ui->lineEdit->text();
    int b = input.toInt();

    QTimer::singleShot(10, this, SLOT(start()));
    QTimer::singleShot(b*1000 + 1000 , this, SLOT(end()));
    QTimer::singleShot(b*1000 + 2000 , this, SLOT(allDark()));

}
void MainWindow::start()
{
    timer->start(1000);
}
void MainWindow::end()
{
    timer->stop();
}
void MainWindow::blink()
{
    QTimer::singleShot(500, this, SLOT(light()));
    QTimer::singleShot(1000, this, SLOT(dark()));
}
void MainWindow::allDark()
{
    QPixmap pix_dark("/home/nvidia/Documents/lab3/lab3/bulb_dark.png");
    ui->label_1->setPixmap(pix_dark);
    ui->label_2->setPixmap(pix_dark);
    ui->label_3->setPixmap(pix_dark);
    ui->label_4->setPixmap(pix_dark);
}
void MainWindow::light()
{
    QPixmap pix_dark("/home/nvidia/Documents/lab3/lab3/bulb_dark.png");
    QPixmap pix_light("/home/nvidia/Documents/lab3/lab3/bulb_light.png");
    if(ui->checkBox_1->isChecked())
    {
      ui->label_1->setPixmap(pix_light);
    }
    else
    {
      ui->label_1->setPixmap(pix_dark);
    }
    if(ui->checkBox_2->isChecked())
    {
      ui->label_2->setPixmap(pix_light);
    }
    else
    {
      ui->label_2->setPixmap(pix_dark);
    }
    if(ui->checkBox_3->isChecked())
    {
      ui->label_3->setPixmap(pix_light);
    }
    else
    {
      ui->label_3->setPixmap(pix_dark);
    }
    if(ui->checkBox_4->isChecked())
    {
      ui->label_4->setPixmap(pix_light);
    }
    else
    {
      ui->label_4->setPixmap(pix_dark);
    }
}

void MainWindow::dark()
{
    QPixmap pix_dark("/home/nvidia/Documents/lab3/lab3/bulb_dark.png");
    QPixmap pix_light("/home/nvidia/Documents/lab3/lab3/bulb_light.png");
    if(ui->checkBox_1->isChecked())
    {
      ui->label_1->setPixmap(pix_dark);
    }
    else
    {
      ui->label_1->setPixmap(pix_light);
    }
    if(ui->checkBox_2->isChecked())
    {
      ui->label_2->setPixmap(pix_dark);
    }
    else
    {
      ui->label_2->setPixmap(pix_light);
    }
    if(ui->checkBox_3->isChecked())
    {
      ui->label_3->setPixmap(pix_dark);
    }
    else
    {
      ui->label_3->setPixmap(pix_light);
    }
    if(ui->checkBox_4->isChecked())
    {
      ui->label_4->setPixmap(pix_dark);
    }
    else
    {
      ui->label_4->setPixmap(pix_light);
    }
}
