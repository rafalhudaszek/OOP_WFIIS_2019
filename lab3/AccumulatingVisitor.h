#pragma once
#include "Visitor.h"
class AccumulatingVisitor: public Visitor
{
public: 
    AccumulatingVisitor();//{m_couting=0;}

    void visit(IntData *wsk) override;
    // {
    //     m_couting += wsk->get();
    // }
    
    //funkcja zliczajaca zmienne przyjmujaca wskaznik polimorficzny
    void visit(FloatData *wsk) override;
    // {
    //     m_couting += wsk->getFloat();
    // }
    float getTotalSum()const;
    // {
    //     return m_couting;
    // }

private:
    float m_couting;
};
