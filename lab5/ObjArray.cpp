#include <iostream>

#include "ObjArray.h"
#include "Object.h"
#include "Exception.h"

using namespace std;
/*
void *ObjArray::operator new (size_t rozmiar)
{
    ObjArray= 
}*/

void ObjArray::Set(size_t rozmiar, Object *obiekt)
{
    if(rozmiar!=m_rozmiar)
    {
        m_tab[rozmiar]=obiekt;
    }
    else
    {
        delete obiekt;
        throw Exception(this);
    }
    
}
