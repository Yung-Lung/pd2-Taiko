#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(768,476);


    w.setObjectName("mainWindow");
    w.setStyleSheet("#mainWindow{border-image:url(:resultbg_clear.png)};");
    w.show();

    return a.exec();
}

