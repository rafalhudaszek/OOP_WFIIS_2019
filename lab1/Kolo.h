#pragma once
#include "Ksztalt.h"

class Kolo: public Ksztalt
{
public:

    Kolo(double promien):m_promien(promien){};
    
    double polePow()const;
    void wypisz (std::ostream &ostrem)const;


protected:

    double m_promien;

};

