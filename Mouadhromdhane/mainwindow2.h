#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H
#include <QMainWindow>
#include "depenses.h"
#include "revenus.h"
#include "dialog4.h"
#include "dialog44.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow2; }
QT_END_NAMESPACE

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_81_clicked();

    void on_pushButton_82_clicked();

private:
    Ui::MainWindow2 *ui;
    depenses tmpetudiant;
    revenus  tmpetudiant2;
};
#endif // MAINWINDOW2_H
