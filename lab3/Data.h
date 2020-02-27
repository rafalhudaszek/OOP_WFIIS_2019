#pragma once 
class Visitor;
class Data
{
public:
    virtual void acceptVisitor(Visitor &obj)=0;
    virtual ~Data()=default;
};