#pragma once
#include "Ksztalt.h"


class Trojkat: public Ksztalt
{
public:

    Trojkat(double b1, double b2, double b3):m_b1(b1), m_b2(b2), m_b3(b3){};

    double polePow()const;
    void wypisz (std::ostream &ostrem)const;

protected:

    double m_b1, m_b2, m_b3;

};