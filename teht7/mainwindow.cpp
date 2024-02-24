#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    playTimer = new QTimer();
    connect(playTimer, SIGNAL(timeout()), this, SLOT(updateProgressBar()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete playTimer;
    playTimer = nullptr;
}

void MainWindow::updateProgressBar(){

    if(currentPlayer==1){
        player1Time-=1;
    }
    else if(currentPlayer==2){
        player2Time-=1;
    }
    ui->Rbar->setValue(player2Time);
    ui->Lbar->setValue(player1Time);

    if(player1Time <= 0){
        setGameInfoText("Player 1 ran out of time. Player 2 has won!", 12);
        playTimer->stop();
    }
    else if(player2Time <= 0){
        setGameInfoText("Player 2 ran out of time. Player 1 has won!", 12);
        playTimer->stop();
    }
}

void MainWindow::setGameInfoText(QString gameInfo, short fontSize){

    ui->gamestate->setFont(QFont("Meiryo", fontSize));
    ui->gamestate->setText(gameInfo);
}


void MainWindow::on_start_clicked()
{
    if(!playTimer->isActive())
    {
    ui->gamestate->setText("Game ongoing");
    currentPlayer = 1;
    ui->turnMarker->setText("Player 1's Turn");
    playTimer->start(1000);
    }

}


void MainWindow::on_stop_clicked()
{
    setGameInfoText("Select playtime and start the game!", 12);
    playTimer->stop();
}


void MainWindow::on_B120_clicked()
{
    if(!playTimer->isActive())
    {
    setGameInfoText("Ready to play", 12);

    gameTime = 120;

    ui->Rbar->setMinimum(0);
    ui->Rbar->setMaximum(gameTime);
    ui->Rbar->setValue(gameTime);

    ui->Lbar->setMinimum(0);
    ui->Lbar->setMaximum(gameTime);
    ui->Lbar->setValue(gameTime);

    player1Time = gameTime;
    player2Time = gameTime;
    }
}


void MainWindow::on_B300_clicked()
{
    if(!playTimer->isActive()){
    setGameInfoText("Ready to play", 12);

    gameTime = 300;
    ui->Rbar->setMinimum(0);
    ui->Rbar->setMaximum(gameTime);
    ui->Rbar->setValue(gameTime);

    ui->Lbar->setMinimum(0);
    ui->Lbar->setMaximum(gameTime);
    ui->Lbar->setValue(gameTime);

    player1Time = gameTime;
    player2Time = gameTime;
    }
}


void MainWindow::on_Lswitch_clicked()
{
    currentPlayer = 2;
    ui->turnMarker->setText("Player 2's Turn");
}


void MainWindow::on_Rswitch_clicked()
{
    currentPlayer = 1;
    ui->turnMarker->setText("Player 1's Turn");
}
