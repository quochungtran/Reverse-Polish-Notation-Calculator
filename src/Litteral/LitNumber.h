#ifndef LitNumber_h
#define LitNumber_h
#include <iostream>

#include "Litterale.h"

class LitNumber : public Litterale
{
public:
    ~LitNumber() {}
    //Litterale &simplification() = 0;
    virtual bool    isNull()          const = 0;
    virtual bool    isPos()           const = 0;
    virtual typeLit getType()         const = 0;
    virtual QString getText()         const = 0;

    //Si on veut ajouter autre type Litteral de Number par exemple Litteral Complexe
    //ajouter virtual surchage operator apres pour generer Litterale Complexe
    
    
    // This function permet de prendre le pointeur Numerique pour des classes contient la valeur Numerique
    // on active Polymopphism la
    
    virtual LitNumerique *getValeurNumerique() = 0;
};
#endif
