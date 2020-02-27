#pragma once

#include <string>
#include <iostream>

#include "ObjArray.h"

class Exception
{
public:


    Exception(ObjArray *notmy):my(notmy){}
    ~Exception()
    {
        for(int i=0; i<my->m_rozmiar; i++)
    {
        delete my->m_tab[i];
    }
        delete my->m_tab;
    }

    ObjArray *my;
};