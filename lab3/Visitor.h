#pragma once

#include "Data.h"
class FloatData;
class IntData;
class Visitor
{
public:
    virtual void visit(FloatData *wsk)=0;
    virtual void visit(IntData *wsk)=0;
    virtual ~Visitor()=default;

};