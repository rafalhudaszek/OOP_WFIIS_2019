#include <iostream>
#include "Kwadrat.h"

using namespace std;



void Kwadrat::wypisz(std::ostream &ostry)const
{
    ostry<<"Kwadrat o boku:"<<m_bok<<endl;
}


double Kwadrat::polePow()const
{
    return m_bok*m_bok;
}