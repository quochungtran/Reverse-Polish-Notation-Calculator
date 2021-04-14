#ifndef Litterale_h
#define Litterale_h
#include <iostream>
#include "CalculatorException.h"
enum typeLit
{
    ENTIER,
    RAT,
    REELLE,
    Atom,
    EXP,
    PROG
};
// declaration La class LitNumerique
class LitNumerique;

class Litterale
{
protected:
public:
    virtual ~Litterale() = default;
    //virtual Litterale &simplification() = 0;
    virtual bool isNull() const = 0;
    virtual typeLit getType() const = 0;
    // affchier la valeur
    virtual QString getText() = 0;
    // This function permet de tirer le pointeur Numerique pour des classes contient la valeur Numerique
    // on active Polymopphism la
    virtual LitNumerique *getValeurNumerique() = 0;

private:
    typeLit type;
};

#endif
