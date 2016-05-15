#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int score=0;
int times=0;
int tt=0;
//int sec=30;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand(time(NULL));
    ui->setupUi(this);
    ui->pushButton->setText("開始人生");

    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(handleButton()));
    ui->label_Jp2->hide();
    ui->label_Jp3->hide();
    ui->label_Kp2->hide();
    ui->label_Kp3->hide();
    ui->sec->hide();
    ui->score->hide();
    ui->FScore->hide();

}

QTimer *timer=new QTimer();
QTimer *Second=new QTimer();
void MainWindow::handleButton(){
    setStyleSheet("#mainWindow{border-image:url(F:/Git/C++/project2/Tiko/bg_miss_p2.png)};");
    ui->FScore->hide();
    ui->label_J->hide();
    ui->label_Jp->move(680,190);
    ui->label_Jp->hide();
    ui->label_K->hide();
    ui->label_Kp->move(680,190);
    ui->label_Kp->hide();
    ui->sec->show();
    ui->score->show();
    ui->pushButton->resize(0,0);
    sec=30;
    score = 0;
    if(tt==0){
        connect(timer,SIGNAL(timeout()),this,SLOT(time_count()));
        connect(Second,SIGNAL(timeout()),this,SLOT(seconds()));
        tt++;
    }
    Second->start(1000);
    timer->start(40);
}

void MainWindow::seconds(){
    sec--;
    ui->sec->setText("Second : "+QString::number(sec));
    if (sec==0){
        timer->stop();
        Second->stop();
        ui->label_Jp->hide();
        ui->label_Kp->hide();
        ui->label_Jp2->hide();
        ui->label_Jp3->hide();
        ui->label_Kp2->hide();
        ui->label_Kp3->hide();
        ui->label_Jp->move(680,190);
        ui->label_Jp2->move(680,190);
        ui->label_Jp3->move(680,190);
        ui->label_Kp->move(680,190);
        ui->label_Kp2->move(680,190);
        ui->label_Kp3->move(680,190);
        ui->pushButton->setText("人生重來");
        ui->pushButton->setGeometry(460,220,160,80);
        setStyleSheet("#mainWindow{border-image:url(F:/Git/C++/project2/Tiko/03.png)};");
        ui->FScore->setText("只有 "+QString::number(score)+" 分");
        ui->FScore->show();
        ui->score->hide();
        ui->sec->hide();
    }

}

int label_Jx=680;
int label_Kx=680;
int label_Jx2=680;
int label_Kx2=680;
int label_Jx3=680;
int label_Kx3=680;
int show_J=0;
int show_K=0;
int show_J2=0;
int show_K2=0;
int show_J3=0;
int show_K3=0;

void MainWindow::time_count(){

    times++;
    if(times%4==0 && rand()%2==1){
        int a = rand()%6;
        if(a==0){
            ui->label_Jp->show();
            show_J=1;
        }
        else if(a==1){
            ui->label_Jp2->show();
            show_J2=1;
        }
        else if(a==2){
            ui->label_Jp3->show();
            show_J3=1;
        }
        else if(a==3){
            ui->label_Kp->show();
            show_K=1;
        }
        else if(a==4){
            ui->label_Kp2->show();
            show_K2=1;
        }
        else{
            ui->label_Kp3->show();
            show_K3=1;
        }
    }

    if (label_Jx!=0 && show_J==1){
        ui->label_Jp->move(label_Jx,190);
        label_Jx = label_Jx - 20;
    }
    else if((label_Jx==0 && show_J==1)){
        ui->label_Jp->move(680,190);
        ui->label_Jp->hide();
        label_Jx = 680;
        show_J=0;
    }

    if (label_Jx2!=0 && show_J2==1){
        ui->label_Jp2->move(label_Jx2,190);
        label_Jx2 = label_Jx2 - 20;
    }
    else if((label_Jx2==0 && show_J2==1)){
        ui->label_Jp2->move(680,190);
        ui->label_Jp2->hide();
        label_Jx2 = 680;
        show_J2=0;
    }

    if (label_Jx3!=0 && show_J3==1){
        ui->label_Jp3->move(label_Jx3,190);
        label_Jx3 = label_Jx3 - 20;
    }
    else if((label_Jx3==0 && show_J3==1)){
        ui->label_Jp3->move(680,190);
        ui->label_Jp3->hide();
        label_Jx3 = 680;
        show_J3=0;
    }

    if (label_Kx!=0 && show_K==1){
        ui->label_Kp->move(label_Kx,190);
        label_Kx = label_Kx - 20;
    }
    else if((label_Kx==0 && show_K==1)){
        ui->label_Kp->move(680,190);
        ui->label_Kp->hide();
        label_Kx = 680;
        show_K=0;
    }

    if (label_Kx2!=0 && show_K2==1){
        ui->label_Kp2->move(label_Kx2,190);
        label_Kx2 = label_Kx2 - 20;
    }
    else if((label_Kx2==0 && show_K2==1)){
        ui->label_Kp2->move(680,190);
        ui->label_Kp2->hide();
        label_Kx2 = 680;
        show_K2=0;
    }

    if (label_Kx3!=0 && show_K3==1){
        ui->label_Kp3->move(label_Kx3,190);
        label_Kx3 = label_Kx3 - 20;
    }
    else if((label_Kx3==0 && show_K3==1)){
        ui->label_Kp3->move(680,190);
        ui->label_Kp3->hide();
        label_Kx3 = 680;
        show_K3=0;
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_J){
        if(label_Jx<=60){
            score++;
            ui->label_Jp->move(680,190);
            ui->label_Jp->hide();
        }
        if(label_Jx2<=60){
            score++;
            ui->label_Jp2->move(680,190);
            ui->label_Jp2->hide();
        }
        if(label_Jx3<=60){
            score++;
            ui->label_Jp3->move(680,190);
            ui->label_Jp3->hide();
        }
    }
    if(event->key()==Qt::Key_K ){
        if(label_Kx<=60){
            score++;
            ui->label_Kp->move(680,190);
            ui->label_Kp->hide();
        }
        if(label_Kx2<=60){
            score++;
            ui->label_Kp2->move(680,190);
            ui->label_Kp2->hide();
        }
        if(label_Kx3<=60){
            score++;
            ui->label_Kp3->move(680,190);
            ui->label_Kp3->hide();
        }
    }
    ui->score->setText("Score : "+QString::number(score));
}

MainWindow::~MainWindow()
{
    delete ui;
}
