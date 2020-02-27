#pragma once 

#include <string>

#include "PojazdLadowy.h"
#include "PredkoscMaksymalna.h"


class Samochod : public PojazdLadowy
{
public:
    Samochod(const PredkoscMaksymalna &obj):m_speed(obj){};

    std::string type()const override {return "Samochod";}

    int predkoscMaksymalna()const {return m_speed.get_speed();}
private:

    PredkoscMaksymalna m_speed;

};