#ifndef QCOMPUTER_H
#define QCOMPUTER_H
#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QHeaderView>
#include <QDebug>
#include <QPushButton>
#include "controleur.h"
#include "Litterale.h"
#include "LitEntier.h"
#include "LitRationelle.h"
#include "LitReelle.h"
#include "Operateur.h"
#include "OperateurLogique.h"
#include "OperateurNumerique.h"
#include "OperateurPile.h"
#include "Pile.h"
#include "qradiobutton.h"

class QComputer : public QWidget
{
    // Macro qui doit apparaitre dans la partie privée de toute classe qui déclare des signaux/slots
    Q_OBJECT
    // Message affiché à l'utilisateur
    QLineEdit *message;
    // Etat de la pile
    QTableWidget *vuePile;
    // Saisie de la commande utilisateur
    QLineEdit *commande;
    // Pile et controleur pour réaliser les calculs
    Pile *pile;
    // controleur
    Controleur *controleur;
    // le nombre de row de PILE
    // function pour creer le button
    QPushButton *creerButton(const QString &text, const char *slot);
    Stockage *stockage;

    QRadioButton *mutiplChoix;

    QWidget * clavierWidget;
    QGridLayout *clavierLayoutSecond;
    QWidget * clavierWidgetSecond;
    QGridLayout *clavierLayout;

public:
    int rowCount;
    Pile *getPile() { return pile; }
    QTableWidget *getVuePile() { return vuePile; }
    Stockage *getStockage() { return stockage; }
    Controleur *getControleur() { return controleur; }
    explicit QComputer(QWidget *parent = 0);
    ~QComputer()
    {
        delete pile;
        // delete controleur;
    }
    void displayVuePile();

private:
    void calculeAuto();

private slots:
    void onButtonClicked();
    void onSpaceClicked();
    void enterClicked();
    void autoClicked();
    void update();
    void onButtonRadioClicked();

    //     void refresh();
    //     // Interpréter la saisie utilisateur
    //     void getNextCommande();
};
#endif // QCOMPUTER_H
