#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QProgressBar>
#include <QFont>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeout();


private slots:
    void setGameInfoText(QString,short);

    void updateProgressBar();

    void on_start_clicked();

    void on_stop_clicked();

    void on_B120_clicked();

    void on_B300_clicked();

    void on_Lswitch_clicked();

    void on_Rswitch_clicked();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer *playTimer;

};
#endif // MAINWINDOW_H
