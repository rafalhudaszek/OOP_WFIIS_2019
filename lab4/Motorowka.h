#pragma once 

#include <string>
#include "PredkoscMaksymalna.h"
#include "Pojazd.h"

class Motorowka : virtual public Pojazd
{
public:
    Motorowka(const PredkoscMaksymalna &obj):m_maxspeedwater(obj){}

    int predkoscMaksymalna()const {return m_maxspeedwater.get_speed();}

    std::string type()const override{return "Motorowka";}
private:

    PredkoscMaksymalna m_maxspeedwater;

};