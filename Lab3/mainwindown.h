#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QPixmap"
#include <QTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void S_showMsg();

    void S_displayTime();

    void blink();

    void light();

    void dark();

    void start();

    void end();

    void allDark();
private:
    Ui::MainWindow *ui;

    QTimer *timer;
    int times;
    bool bIsClick = false;
};

#endif // MAINWINDOW_H
