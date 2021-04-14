#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QWidget>
#include <QDialog>
#include <QApplication>
#include <QAction>
#include <QtGui>
#include <QAction>
#include <QMenuBar>
#include <QMenu>
#include <Qt>
#include "qcomputer.h"
#include "controleur.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow(){};

private:
    int nb;
    QComputer *computer;
    // Menus
    QMenu *compMenu;
    // Actions
    QAction *quitAction;
    QAction *paramsAction;
    QAction *GestionVariableAction;

    // Table
    QWidget *TableVariable;
    QTableWidget *tab;
    QPushButton *ok;
    QVBoxLayout *layout;

private slots:
    void open_Paramtres();
    void GestionVariable();
    void valideChange();
};
#endif