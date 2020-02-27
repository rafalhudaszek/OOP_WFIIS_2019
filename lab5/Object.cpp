#include <iostream>

#include "Object.h"

using namespace std;

Object::Object(std::string name)
:
m_name(name)
{
    cout<<"Construct: "<<name<<endl;
}


Object::~Object()
{
    cout<<"Destruct: "<<m_name<<endl;
    
}


void Object::Skip()
{
    throw NULL;
}