#include "MainWindow.h"
#include <QInputDialog>
#include <map>

// ---------------------------definir slot-------------------------------
void MainWindow::open_Paramtres()
{
    QString text = QInputDialog::getText(this, "Parametres X", "Vous voulez afficher combien des valeurs ? ");
    computer->getVuePile()->setRowCount(text.toInt());
    computer->rowCount = text.toInt();
    int nbRow = computer->getVuePile()->rowCount();
    std::cout << computer->getPile()->taille();
    QStringList labelList;
    for (unsigned int i = nbRow; i > 0; i--)
    {
        QString str = QString::number(i);
        str += " : ";
        labelList << str;
    }
    computer->getVuePile()->setVerticalHeaderLabels(labelList);

    for (unsigned int i = 0; i < nbRow; i++)
    {
        computer->getVuePile()->setItem(i, 0, new QTableWidgetItem());
    }

    int count = 1;
    for (Pile::iterator it = computer->getPile()->begin(); (it != computer->getPile()->end()) && (count <= nbRow); ++it)
    {
        computer->getVuePile()->item(nbRow - count, 0)->setText((*it).getText());
        count++;
    }
    for (size_t i = count; i <= computer->getVuePile()->rowCount(); i++)
    {
        computer->getVuePile()->item(nbRow - i, 0)->setText("");
    }
}

void MainWindow::GestionVariable()
{
    //    creer nuen nouvelle l
    layout = new QVBoxLayout();
    Stockage *stockage = computer->getStockage();
    unsigned int size = stockage->atoms.size();
    tab = new QTableWidget(size, 2);
    std::map<QString, LitAtom *>::iterator it = stockage->atoms.begin();
    int row = 0;
    while (it != stockage->atoms.end())
    {
        QTableWidgetItem *newItem = new QTableWidgetItem(it->second->getNom());
        tab->setItem(row, 0, newItem);
        QTableWidgetItem *newItem2 = new QTableWidgetItem(it->second->getValeur()->getText());
        tab->setItem(row, 1, newItem2);
        row++;
        it++;
    }

    layout->addWidget(tab);
    layout->addWidget(ok);
    TableVariable->setLayout(layout);
    TableVariable->show();
}

void MainWindow::valideChange()
{
    Stockage *stockage = computer->getStockage();
    std::map<QString, LitAtom *>::iterator it = stockage->atoms.begin();
    Controleur *control = computer->getControleur();

    for (int i = 0; i < tab->rowCount(); i++)
    {
        const QString &c = tab->item(i, 1)->text();
        if (control->estLitterale(c))
        {
            it->second->setValeur(control->getLitterale(c));
            //TODO TODO
        }
        it++;
    }
    layout->removeWidget(tab);
    layout->removeWidget(ok);
    delete layout;
    // delete layout;

    // Close window when click on button
    TableVariable->close();
    // delete tab;
    // delete TableVariable;
}

//---------------------------------Constructeur---------------------------------
MainWindow::MainWindow(QWidget *parent)
{
    setWindowTitle("COMP'UT");

    computer = new QComputer();
    TableVariable = new QWidget();
    TableVariable->setWindowTitle("Gestion variable");
    ok = new QPushButton("OK");

    Stockage *stockage = computer->getStockage();
    unsigned int size = stockage->atoms.size();
    tab = new QTableWidget(size, 2);
    layout = new QVBoxLayout();

    // set layout for tableVariable

    // Setup File Menu
    compMenu = menuBar()->addMenu("&Menu");
    quitAction = new QAction("Quit", this);
    paramsAction = new QAction("Parametres", this);
    GestionVariableAction = new QAction("Variable", this);

    compMenu->addAction(paramsAction);
    compMenu->addAction(GestionVariableAction);
    compMenu->addAction(quitAction);

    QMainWindow::setCentralWidget(computer);

    // SET up signal et slots

    // QUIT action
    connect(quitAction, &QAction::triggered, this, &QApplication::quit);
    // Paramettre action
    connect(paramsAction, SIGNAL(triggered()), this, SLOT(open_Paramtres()));

    // gestion Parametre
    connect(GestionVariableAction, SIGNAL(triggered()), this, SLOT(GestionVariable()));
    connect(ok, SIGNAL(clicked()), this, SLOT(valideChange()));
}
