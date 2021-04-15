#include "qcomputer.h"
#include <QFrame>
#include <QScrollBar>
#include <iostream>

// int QComputer::rowCount = 7;
QComputer::QComputer(QWidget *parent) : QWidget(parent) // Appel au constructeur de la classe de base
{
    // 1 : Créer les différents objets
    message = new QLineEdit();
    commande = new QLineEdit();
    pile = new Pile();
    rowCount = 5;
    // pile->push(new LitEntier{1});
    // pile->push(new LitEntier{2});

    stockage = new Stockage();
    OperateurManager *operateurManager = new OperateurManager(stockage);
    controleur = new Controleur(*operateurManager, pile);
    // controleur = new Controleur(ExpressionManager::getInstance(), *pile);
    vuePile = new QTableWidget(rowCount, 1);
    // 2 : Positionner les objets sur la fenêtre

    QVBoxLayout *mainLayout = new QVBoxLayout();
    setLayout(mainLayout);

    mainLayout->addWidget(message);
    mainLayout->addWidget(vuePile);
    mainLayout->addWidget(commande);

    // clavierWidget = new QWidget();
    mutiplChoix = new QRadioButton("masquer", this);
    mainLayout->addWidget(mutiplChoix);

    // clavierWidget->add(clavierClick2);

    // ON rattache le layout à la fenêtre (this)
    // setLayout(couche);

    // 3 : Mettre un titre à la fenêtre

    // 4 : Couleur à la barre + empêcher l'édition
    // background : couleur de fond
    // color : couleur du texte
    // message->setStyleSheet("background : #00156B; color: yellow");
    // Passage en lecture seule
    message->setReadOnly(true);
    // setStyleSheet()

    // 5 : Bonne apparence vuePile + non modifiable
    // vuePile->setStyleSheet("background : #00156B; color: yellow");
    // vuePile->verticalHeader()->setStyleSheet("color: black");
    vuePile->horizontalHeader()->setVisible(false);
    vuePile->horizontalHeader()->setStretchLastSection(true);
    vuePile->setEditTriggers(QAbstractItemView::NoEditTriggers);
    vuePile->setSelectionMode(QAbstractItemView::NoSelection);
    vuePile->setFocusPolicy(Qt::NoFocus);
    QStringList labelList;
    for (unsigned int i = rowCount; i > 0; i--)
    {
        QString str = QString::number(i);
        str += " : ";
        labelList << str;
    }
    vuePile->setVerticalHeaderLabels(labelList);

    for (unsigned int i = 0; i < rowCount; i++)
    {
        vuePile->setItem(i, 0, new QTableWidgetItem());
    }
    // 6 : Connecter signaux/slots
    /*
    connect(pile, SIGNAL(modificationEtat()), this, SLOT(refresh()));
    connect(commande, SIGNAL(returnPressed()), this, SLOT(getNextCommande()));
    */
    // 7 : Focus barre de commande
    commande->setFocus();
    QObject::connect(commande, SIGNAL(returnPressed()), this, SLOT(enterClicked()));
    // 8 : Définir les deux slots

    // Operand basique
    QPushButton *plus = creerButton("+", SLOT(autoClicked()));
    QPushButton *moins = creerButton("-", SLOT(autoClicked()));
    QPushButton *div = creerButton("*", SLOT(autoClicked()));
    QPushButton *mul = creerButton("/", SLOT(autoClicked()));
    QPushButton *point = creerButton(".", SLOT(onButtonClicked()));
    QPushButton *space = creerButton("SPACE", SLOT(onSpaceClicked()));
    QPushButton *enter = creerButton("ENTER", SLOT(enterClicked()));

    QPushButton *nombreArray[10];
    for (int i = 0; i <= 9; i++)
    {
        nombreArray[i] = creerButton(QString::number(i), SLOT(onButtonClicked()));
    }

    QGridLayout *operandBasiqueLayout = new QGridLayout();
    operandBasiqueLayout->addWidget(nombreArray[7], 0, 0);
    operandBasiqueLayout->addWidget(nombreArray[8], 0, 1);
    operandBasiqueLayout->addWidget(nombreArray[9], 0, 2);
    operandBasiqueLayout->addWidget(nombreArray[6], 1, 0);
    operandBasiqueLayout->addWidget(nombreArray[5], 1, 1);
    operandBasiqueLayout->addWidget(nombreArray[4], 1, 2);
    operandBasiqueLayout->addWidget(nombreArray[3], 2, 0);
    operandBasiqueLayout->addWidget(nombreArray[2], 2, 1);
    operandBasiqueLayout->addWidget(nombreArray[1], 2, 2);
    operandBasiqueLayout->addWidget(nombreArray[0], 3, 0);

    operandBasiqueLayout->addWidget(point, 3, 1);
    operandBasiqueLayout->addWidget(space, 3, 2);
    operandBasiqueLayout->addWidget(plus, 0, 4);
    operandBasiqueLayout->addWidget(moins, 1, 4);
    operandBasiqueLayout->addWidget(div, 2, 4);
    operandBasiqueLayout->addWidget(mul, 3, 4);
    operandBasiqueLayout->addWidget(enter, 4, 0, 2, 0);

    QFrame *operandBasiqueFrame = new QFrame();
    operandBasiqueFrame->setLayout(operandBasiqueLayout);

    // Operande Avance
    QPushButton *divEntier = creerButton("DIV", SLOT(onButtonClicked()));
    QPushButton *mod = creerButton("MOD", SLOT(onButtonClicked()));
    QPushButton *neg = creerButton("NEG", SLOT(onButtonClicked()));
    QPushButton *num = creerButton("NUM", SLOT(onButtonClicked()));
    QPushButton *den = creerButton("DEN", SLOT(onButtonClicked()));
    QPushButton *pow = creerButton("POW", SLOT(onButtonClicked()));
    QPushButton *sin = creerButton("SIN", SLOT(onButtonClicked()));
    QPushButton *cos = creerButton("COS", SLOT(onButtonClicked()));
    QPushButton *tan = creerButton("TAN", SLOT(onButtonClicked()));
    QPushButton *arcsin = creerButton("ARCSIN", SLOT(onButtonClicked()));
    QPushButton *arccos = creerButton("ARCCOS", SLOT(onButtonClicked()));
    QPushButton *arctan = creerButton("ARCTAN", SLOT(onButtonClicked()));
    QPushButton *sqrt = creerButton("SQRT", SLOT(onButtonClicked()));
    QPushButton *exp = creerButton("EXP", SLOT(onButtonClicked()));
    QPushButton *ln = creerButton("LN", SLOT(onButtonClicked()));

    QGridLayout *operandAvanceLayout = new QGridLayout();
    operandAvanceLayout->addWidget(mod, 0, 0);
    operandAvanceLayout->addWidget(divEntier, 0, 1);
    operandAvanceLayout->addWidget(neg, 0, 2);
    operandAvanceLayout->addWidget(num, 0, 3);
    operandAvanceLayout->addWidget(den, 0, 4);
    operandAvanceLayout->addWidget(pow, 1, 0);
    operandAvanceLayout->addWidget(sin, 1, 1);
    operandAvanceLayout->addWidget(cos, 1, 2);
    operandAvanceLayout->addWidget(tan, 1, 3);
    operandAvanceLayout->addWidget(arcsin, 1, 4);
    operandAvanceLayout->addWidget(arccos, 2, 0);
    operandAvanceLayout->addWidget(arctan, 2, 1);
    operandAvanceLayout->addWidget(sqrt, 2, 2);
    operandAvanceLayout->addWidget(exp, 2, 3);
    operandAvanceLayout->addWidget(ln, 2, 4);

    QFrame *operandAvanceFrame = new QFrame();
    operandAvanceFrame->setLayout(operandAvanceLayout);

    // Operateur logique
    QPushButton *egal = creerButton("=", SLOT(onButtonClicked()));
    QPushButton *different = creerButton("!=", SLOT(onButtonClicked()));
    QPushButton *InfEgal = creerButton("=<", SLOT(onButtonClicked()));
    QPushButton *SupEgal = creerButton(">=", SLOT(onButtonClicked()));
    QPushButton *StrictInf = creerButton("<", SLOT(onButtonClicked()));
    QPushButton *StrictSup = creerButton(">", SLOT(onButtonClicked()));
    QPushButton *et = creerButton("AND", SLOT(onButtonClicked()));
    QPushButton *ou = creerButton("OR", SLOT(onButtonClicked()));
    QPushButton *non = creerButton("NOT", SLOT(onButtonClicked()));
    QPushButton *sto = creerButton("STO", SLOT(onButtonClicked()));
    QPushButton *eval = creerButton("EVAL", SLOT(onButtonClicked()));
    QPushButton *guillement = creerButton("'", SLOT(onButtonClicked()));

    QGridLayout *operandOpeLogiqueLayout = new QGridLayout();
    operandOpeLogiqueLayout->addWidget(egal, 0, 0);
    operandOpeLogiqueLayout->addWidget(different, 0, 1);
    operandOpeLogiqueLayout->addWidget(InfEgal, 0, 2);
    operandOpeLogiqueLayout->addWidget(SupEgal, 1, 0);
    operandOpeLogiqueLayout->addWidget(StrictInf, 1, 1);
    operandOpeLogiqueLayout->addWidget(StrictSup, 1, 2);
    operandOpeLogiqueLayout->addWidget(et, 2, 0);
    operandOpeLogiqueLayout->addWidget(ou, 2, 1);
    operandOpeLogiqueLayout->addWidget(non, 2, 2);
    operandOpeLogiqueLayout->addWidget(sto, 3, 0);
    operandOpeLogiqueLayout->addWidget(eval, 3, 1);
    operandOpeLogiqueLayout->addWidget(guillement, 3, 2);

    QFrame *operandLogiqueFrame = new QFrame();
    operandLogiqueFrame->setLayout(operandOpeLogiqueLayout);

    // operande de Pile et Operande conditionel et de boucle
    QPushButton *dup = creerButton("DUP", SLOT(onButtonClicked()));
    QPushButton *drop = creerButton("DROP", SLOT(onButtonClicked()));
    QPushButton *swap = creerButton("SWAP", SLOT(onButtonClicked()));
    QPushButton *clear = creerButton("CLEAR", SLOT(onButtonClicked()));
    QPushButton *undo = creerButton("UNDO", SLOT(autoClicked()));
    QPushButton *redo = creerButton("REDO", SLOT(autoClicked()));
    QPushButton *ifte = creerButton("IFTE", SLOT(onButtonClicked()));
    QPushButton *ift = creerButton("IFT", SLOT(onButtonClicked()));
    QPushButton *While = creerButton("WHILE", SLOT(onButtonClicked()));

    QGridLayout *operandPileCondLayout = new QGridLayout();
    operandPileCondLayout->addWidget(dup, 0, 0);
    operandPileCondLayout->addWidget(drop, 0, 1);
    operandPileCondLayout->addWidget(swap, 0, 2);
    operandPileCondLayout->addWidget(undo, 1, 0);
    operandPileCondLayout->addWidget(redo, 1, 1);
    operandPileCondLayout->addWidget(clear, 1, 2);
    operandPileCondLayout->addWidget(ift, 2, 0);
    operandPileCondLayout->addWidget(ifte, 2, 1);
    operandPileCondLayout->addWidget(While, 2, 2);

    QFrame *operandPileCondFrame = new QFrame();
    operandPileCondFrame->setLayout(operandPileCondLayout);

    // clavier
    clavierWidget = new QWidget();
    clavierLayout = new QGridLayout();
    clavierLayout->addWidget(operandPileCondFrame, 0, 0);
    clavierLayout->addWidget(operandAvanceFrame, 0, 1);
    clavierLayout->addWidget(operandBasiqueFrame, 1, 0);
    clavierLayout->addWidget(operandLogiqueFrame, 1, 1);
    clavierWidget->setLayout(clavierLayout);

    clavierWidgetSecond = new QWidget();
    // clavierLayoutSecond = new QGridLayout();

    // main
    mainLayout->addWidget(clavierWidgetSecond);
    mainLayout->addWidget(clavierWidget);

    QObject::connect(mutiplChoix, SIGNAL(toggled(bool)), this, SLOT(onButtonRadioClicked()));
    // QObject::connect(mutiplChoix, SIGNAL(toggled(bool)), this, SLOT(onButtonRadioClicked()));
}

void QComputer::displayVuePile()
{
    int count = 1;
    Pile *pile = controleur->getPile();
    for (Pile::iterator it = pile->begin(); (it != pile->end()) && (count <= rowCount); ++it)
    {
        vuePile->item(rowCount - count, 0)->setText((*it).getText());
        count++;
    }
    for (size_t i = count; i <= rowCount; i++)
    {
        vuePile->item(rowCount - i, 0)->setText("");
    }
}

void QComputer::calculeAuto()
{
    controleur->traiter(commande->text());
    displayVuePile();
    message->clear();
    commande->clear();
}

QPushButton *QComputer::creerButton(const QString &text, const char *slot)
{
    QPushButton *button = new QPushButton(text);
    QObject::connect(button, SIGNAL(clicked()), this, slot);
    return button;
}

void QComputer::onButtonClicked()
{
    QPushButton *buttonSender = (QPushButton *)(sender()); // retrieve the button you have clicked
    QString buttonText = buttonSender->text();
    QString currentText = commande->text();
    currentText.append(buttonText);
    commande->setText(currentText);
}

void QComputer::onSpaceClicked()
{
    QPushButton *buttonSender = (QPushButton *)(sender()); // retrieve the button you have clicked
    buttonSender->setText(" ");
    QString buttonText = buttonSender->text();
    QString currentText = commande->text();
    currentText.append(buttonText);
    commande->setText(currentText);
    buttonSender->setText("SPACE");
}

void QComputer::enterClicked()
{
    try
    {
        calculeAuto();
    }
    catch (const CalculatorException &e)
    {
        message->setText(e.what());
    }
}

void QComputer::autoClicked()
{
    try
    {
        QPushButton *buttonSender = (QPushButton *)(sender()); // retrieve the button you have clicked
        if (buttonSender->text() == "UNDO")
        {
            controleur->chargerPrecedent();
        }
        if (buttonSender->text() == "REDO")
        {
            controleur->chargerSuivant();
        }
        QString operateur = buttonSender->text();
        if (operateur == "+" || operateur == "-" || operateur == "*" || operateur == "/")
        {
            controleur->traiter(commande->text() + " " + operateur);
        }
        displayVuePile();
        message->clear();
        commande->clear();
    }
    catch (const CalculatorException &e)
    {
        message->setText(e.what());
    }
}

void QComputer::onButtonRadioClicked()
{
    // setC
    if (mutiplChoix->isChecked() == true)
    {
        clavierLayoutSecond = new QGridLayout();
        std::map<QString, LitAtom *>::iterator it = stockage->atoms.begin();
        int i = 0;
        while (it != stockage->atoms.end())
        {
            QPushButton *buttonVariable = creerButton(it->second->getNom(), SLOT(onButtonClicked()));
            clavierLayoutSecond->addWidget(buttonVariable, 0, i);
            i++;
            it++;
        }

        clavierWidgetSecond->setLayout(clavierLayoutSecond);
        clavierWidgetSecond->show();
        clavierWidget->close();
    }
    else
    {
        delete clavierLayoutSecond;
        clavierWidgetSecond->close();
        clavierWidget->show();
    }
}
