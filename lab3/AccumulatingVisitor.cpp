#include "AccumulatingVisitor.h"
#include "ElData.h"

AccumulatingVisitor::AccumulatingVisitor(){m_couting=0;}

void AccumulatingVisitor::visit(IntData *wsk) 
{
    m_couting += wsk->get();
}

//funkcja zliczajaca zmienne przyjmujaca wskaznik polimorficzny
void AccumulatingVisitor::visit(FloatData *wsk) 
{
    m_couting += wsk->getFloat();
}
float AccumulatingVisitor::getTotalSum()const
{
    return m_couting;
}