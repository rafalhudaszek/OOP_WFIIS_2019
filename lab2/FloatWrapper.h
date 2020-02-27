#pragma once
#include "Wrapper.h"
class FloatWrapper: public Wrapper
{
public:
    FloatWrapper(float value):m_value(value){};
    void print(std::ostream &tmp)const
    {
        tmp<<m_value<<" ";
    }

    ~FloatWrapper();

private:
    float m_value;

};

FloatWrapper::~FloatWrapper()
{

}