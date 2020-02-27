#include <iostream>
#include "Kolo.h"
#include <math.h>
using namespace std;

double Kolo::polePow()const
{
    return m_promien*m_promien*M_PI;

}
void Kolo::wypisz (std::ostream &ostrem) const
{
    ostrem<<"Kolo o promieniu:"<<m_promien<<endl;
}