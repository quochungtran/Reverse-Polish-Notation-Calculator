#include <QApplication>

#include "qcomputer.h"
#include "controleur.h"
#include "MainWindow.h"
#include "Litterale.h"
#include "LitEntier.h"
#include "LitRationelle.h"
#include "LitReelle.h"
#include "CalculatorException.h"

#include <QDebug>

#include <iostream>

int main(int argc, char *argv[])
{
    LitNumerique *litEnt = new LitEntier      (10)   ;
    LitNumerique *litRat = new LitRationelle  (2, 3) ;
    LitNumerique *litRe  = new LitReelle      (5.60) ;

    // print operand resultats of these litterals
    qDebug() << litEnt->getText() << "+" << litEnt->getText()  <<  "=" << (*litEnt + *litEnt)->getText();
    qDebug() << litRat->getText() << "+" << litRat->getText()  <<  "=" << (*litRat + *litRat)->getText();
    qDebug() << litRe->getText()  << "+"  << litRe->getText()  <<  "=" <<   (*litRe + *litRe)->getText();

    qDebug() << litEnt->getText() << "+" << litRat->getText()  << "=" << (*litEnt + *litRat)->getText();
    qDebug() << litEnt->getText() << "+" << litRe->getText()   << "=" <<  (*litEnt + *litRe)->getText();
    qDebug() << litRat->getText() << "+" << litRe->getText()   << "=" <<  (*litRat + *litRe)->getText();




    delete litEnt;
    delete litRat;
    delete litRe;

    return 0;
}
