#pragma once

#include <string>

class Rower : public PojazdLadowy
{
public:
    Rower()=default;

    std::string type()const override{return "Rower";}

private:


};