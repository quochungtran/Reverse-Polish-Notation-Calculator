#ifndef OperateurManager_h
#define OperateurManager_h

#include <map>

#include "Operateur.h"
#include "OperateurLogique.h"
#include "OperateurNumerique.h"
#include "OperateurPile.h"
#include "OperateurConditionnel.h"
class OperateurManager
{
private:
    // Operateur **OpeManager;
    static size_t nb;
    static size_t nbMax;
    static OperateurManager *instance;
    OperateurManager(const OperateurManager &em2) = delete;
    OperateurManager &operator=(const OperateurManager &em2) = delete;

public:
    OperateurManager() = default;

    Stockage *stockage;
    std::map<QString, Operateur *> operateur_map;

    OperateurManager(Stockage *s)
    {
        this->stockage = s;
        operateur_map = {
            std::make_pair<QString, Operateur *>("+", new OperatorAddition()),
            std::make_pair<QString, Operateur *>("-", new OperatorSoutraction()),
            std::make_pair<QString, Operateur *>("*", new OperatorMultiplication()),
            std::make_pair<QString, Operateur *>("/", new OperatorDivision()),
            std::make_pair<QString, Operateur *>("DIV", new OperatorDIV()),
            std::make_pair<QString, Operateur *>("MOD", new OperatorMOD()),
            std::make_pair<QString, Operateur *>("NEG", new OperateurNEG()),
            std::make_pair<QString, Operateur *>("SIN", new OperateurSIN()),
            std::make_pair<QString, Operateur *>("COS", new OperateurCOS()),
            std::make_pair<QString, Operateur *>("TAN", new OperateurTAN()),
            std::make_pair<QString, Operateur *>("ARCSIN", new OperateurARCSIN()),
            std::make_pair<QString, Operateur *>("ARCCOS", new OperateurARCCOS()),
            std::make_pair<QString, Operateur *>("ARCTAN", new OperateurARCTAN()),
            std::make_pair<QString, Operateur *>("SQRT", new OperateurSQRT()),
            std::make_pair<QString, Operateur *>("EXP", new OperateurEXP()),
            std::make_pair<QString, Operateur *>("LN", new OperateurLN()),
            std::make_pair<QString, Operateur *>("NUM", new OperateurNUM()),
            std::make_pair<QString, Operateur *>("DEN", new OperateurDEN()),
            std::make_pair<QString, Operateur *>("POW", new OperateurPOW()),


            std::make_pair<QString, Operateur *>("STO", new OperateurSTO(stockage)),
            std::make_pair<QString, Operateur *>("EVAL", new OperateurEVAL(stockage)),

            std::make_pair<QString, Operateur *>("=", new OperatorEgale()),
            std::make_pair<QString, Operateur *>("!=", new OperatorDiff()),
            std::make_pair<QString, Operateur *>("=<", new OperatorInf_Egal()),
            std::make_pair<QString, Operateur *>(">=", new OperatorSup_Egal()),
            std::make_pair<QString, Operateur *>(">", new OperatorSup()),
            std::make_pair<QString, Operateur *>("<", new OperatorInf()),
            std::make_pair<QString, Operateur *>("AND", new OperateurAND()),
            std::make_pair<QString, Operateur *>("OR", new OperateurOR()),
            std::make_pair<QString, Operateur *>("NOT", new OperateurNOT()),

            // reste and or not

            std::make_pair<QString, Operateur *>("DUP", new OperateurDUP()),
            std::make_pair<QString, Operateur *>("DROP", new OperateurDROP()),
            std::make_pair<QString, Operateur *>("SWAP", new OperateurSWAP()),
            std::make_pair<QString, Operateur *>("CLEAR", new OperateurCLEAR()),
            std::make_pair<QString, Operateur *>("IFT", new OperateurIFT()),

        };
    };
    // Fournit une unique instance de ExpressionManager
    static OperateurManager &donneInstance();
    // Libre l'instance unique
    static void libereInstance();
};

#endif