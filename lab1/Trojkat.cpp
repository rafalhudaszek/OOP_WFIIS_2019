#include <iostream>
#include "Trojkat.h"
#include <math.h>
using namespace std;

double Trojkat::polePow()const
{
    return 10;
}


void Trojkat::wypisz (std::ostream &ostrem)const
{
    ostrem<<"Trojkat bokach:"<<m_b1<<" "<<m_b2<<" "<<m_b3<<endl;
}