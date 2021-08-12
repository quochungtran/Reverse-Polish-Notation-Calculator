#include "LitProgramme.h"

bool LitProgramme::isNull() const
{
    return suitOperand.isNull();
}

typeLit LitProgramme::getType() const
{
    return typeLit::PROG;
}

QString LitProgramme::getText()
{
    return suitOperand;
}

LitNumerique *LitProgramme::getValeurNumerique()
{
    return nullptr;
}
