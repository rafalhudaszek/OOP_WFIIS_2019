#pragma once
#include "Ksztalt.h"
#include <iostream>
class Kwadrat: public Ksztalt
{
public:
    
    Kwadrat(double bok):m_bok(bok){};

    void wypisz(std::ostream &ostry)const;
    double polePow()const;

protected:

    double m_bok;
};