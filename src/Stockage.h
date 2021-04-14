#ifndef Stockage_h
#define Stockage_h

#include <QString>
#include "LitAtom.h"
#include <map>
class Stockage
{
private:
    // Operateur **OpeManager;

    Stockage(const Stockage &em2) = delete;
    Stockage &operator=(const Stockage &em2) = delete;

public:
    Stockage() = default;
    std::map<QString, LitAtom *> atoms;
    // Fournit une unique instance de ExpressionManager
    void stocker(const QString &c, LitAtom *litAtom)
    {
        atoms[c] = litAtom;
    }
    LitAtom *getLitAtom(const QString &c) { return atoms[c]; }
};

#endif