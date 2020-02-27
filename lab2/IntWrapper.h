#pragma once
#include "Wrapper.h"


class IntWrapper: public Wrapper
{
public:
    IntWrapper(int value):m_value(value){};
    void print(std::ostream &tmp)const
    {
        tmp<<m_value<<" ";
    }

    ~IntWrapper();

private:
    int m_value;
};

IntWrapper::~IntWrapper()
{

}