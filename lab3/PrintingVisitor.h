#pragma once
#include <iostream>

class PrintingVisitor: public Visitor
{
public: 
    void visit(IntData *wsk) override
    {
        std::cout<< wsk->get()<<" ";
    }
    
    void visit(FloatData *wsk) override
    {
        std::cout<< wsk->getFloat()<<" ";
    }
private:


};