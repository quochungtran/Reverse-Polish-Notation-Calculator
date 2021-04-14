#include <QApplication>
#include "qcomputer.h"
#include "controleur.h"
#include "MainWindow.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    // QComputer fenetre;
    MainWindow main;
    main.show();
    // fenetre.show();
    return app.exec();
}
