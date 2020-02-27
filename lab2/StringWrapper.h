#pragma once
#include "Wrapper.h"
#include <string.h>
using namespace std;
class StringWrapper: public Wrapper
{
public:
    StringWrapper(string str):m_str(str){};
    void print(std::ostream &tmp)const
    {
        tmp<<m_str<<" ";
    }

    ~StringWrapper();

private:
    string m_str;

};
StringWrapper::~StringWrapper()
{

}