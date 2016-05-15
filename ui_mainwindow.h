/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label_Jp;
    QLabel *label_Kp;
    QLabel *label_J;
    QLabel *label_K;
    QLabel *label_Kp3;
    QLabel *label_Jp2;
    QLabel *label_Jp3;
    QLabel *label_Kp2;
    QLabel *score;
    QLabel *sec;
    QLabel *FScore;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(750, 431);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 100, 150, 90));
        QFont font;
        font.setPointSize(24);
        pushButton->setFont(font);
        label_Jp = new QLabel(centralWidget);
        label_Jp->setObjectName(QStringLiteral("label_Jp"));
        label_Jp->setGeometry(QRect(490, 100, 81, 71));
        label_Jp->setPixmap(QPixmap(QString::fromUtf8(":/pics/01.png")));
        label_Kp = new QLabel(centralWidget);
        label_Kp->setObjectName(QStringLiteral("label_Kp"));
        label_Kp->setGeometry(QRect(640, 100, 81, 71));
        label_Kp->setPixmap(QPixmap(QString::fromUtf8(":/pics/02.png")));
        label_J = new QLabel(centralWidget);
        label_J->setObjectName(QStringLiteral("label_J"));
        label_J->setGeometry(QRect(506, 180, 51, 41));
        label_J->setFont(font);
        label_J->setLineWidth(1);
        label_J->setAlignment(Qt::AlignCenter);
        label_K = new QLabel(centralWidget);
        label_K->setObjectName(QStringLiteral("label_K"));
        label_K->setGeometry(QRect(650, 180, 47, 41));
        label_K->setFont(font);
        label_K->setAlignment(Qt::AlignCenter);
        label_Kp3 = new QLabel(centralWidget);
        label_Kp3->setObjectName(QStringLiteral("label_Kp3"));
        label_Kp3->setGeometry(QRect(680, 190, 81, 71));
        label_Kp3->setPixmap(QPixmap(QString::fromUtf8(":/pics/02.png")));
        label_Jp2 = new QLabel(centralWidget);
        label_Jp2->setObjectName(QStringLiteral("label_Jp2"));
        label_Jp2->setGeometry(QRect(680, 190, 81, 71));
        label_Jp2->setPixmap(QPixmap(QString::fromUtf8(":/pics/01.png")));
        label_Jp3 = new QLabel(centralWidget);
        label_Jp3->setObjectName(QStringLiteral("label_Jp3"));
        label_Jp3->setGeometry(QRect(680, 190, 81, 71));
        label_Jp3->setPixmap(QPixmap(QString::fromUtf8(":/pics/01.png")));
        label_Kp2 = new QLabel(centralWidget);
        label_Kp2->setObjectName(QStringLiteral("label_Kp2"));
        label_Kp2->setGeometry(QRect(680, 190, 81, 71));
        label_Kp2->setPixmap(QPixmap(QString::fromUtf8(":/pics/02.png")));
        score = new QLabel(centralWidget);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(80, 20, 151, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(24);
        score->setFont(font1);
        sec = new QLabel(centralWidget);
        sec->setObjectName(QStringLiteral("sec"));
        sec->setGeometry(QRect(490, 20, 181, 61));
        sec->setFont(font1);
        sec->setAutoFillBackground(false);
        FScore = new QLabel(centralWidget);
        FScore->setObjectName(QStringLiteral("FScore"));
        FScore->setGeometry(QRect(450, 150, 131, 51));
        FScore->setFont(font);
        FScore->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Start", 0));
        label_Jp->setText(QString());
        label_Kp->setText(QString());
        label_J->setText(QApplication::translate("MainWindow", "J", 0));
        label_K->setText(QApplication::translate("MainWindow", "K", 0));
        label_Kp3->setText(QString());
        label_Jp2->setText(QString());
        label_Jp3->setText(QString());
        label_Kp2->setText(QString());
        score->setText(QApplication::translate("MainWindow", "Score : 0", 0));
        sec->setText(QApplication::translate("MainWindow", "Second : ", 0));
        FScore->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
