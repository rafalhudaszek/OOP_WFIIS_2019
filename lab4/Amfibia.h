#pragma once
#include <string>
#include "Samochod.h"
#include "Motorowka.h"

class PredkoscMaksymalna;

class Amfibia : public Samochod, public Motorowka
{
public:
    Amfibia(const PredkoscMaksymalna &obj1, const PredkoscMaksymalna &obj2): Samochod(obj1), Motorowka(obj2){}

    ~Amfibia()=default;

    int predkoscMaksymalna_Lad(){return Samochod::predkoscMaksymalna();}

    int predkoscMaksymalna_Woda(){return Motorowka::predkoscMaksymalna();}

    std::string type()const override{return "Amfibia";}

};