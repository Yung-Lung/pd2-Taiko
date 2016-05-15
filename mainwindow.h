#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
        void keyPressEvent(QKeyEvent *event);
    ~MainWindow();
        int sec=30;

private:
    Ui::MainWindow *ui;
    private slots: void handleButton();
                   void time_count();
                   void seconds();
};

#endif // MAINWINDOW_H
