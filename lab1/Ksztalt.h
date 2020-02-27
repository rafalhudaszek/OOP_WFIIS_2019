#pragma once
#include <string.h>
#include <iostream>
class Ksztalt
{
public:        

    ~Ksztalt();

        virtual double polePow()const =0;

        virtual void wypisz(std::ostream &obiekt)const =0;
         

};

void wypisz(const Ksztalt &obiekt);