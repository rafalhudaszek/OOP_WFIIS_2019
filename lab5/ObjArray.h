#pragma once 

#include "Object.h"

class ObjArray
{
public:

    ObjArray(int rozmiar):m_rozmiar(rozmiar)
    {
        m_tab= new Object * [rozmiar];
        for(int i=0; i<rozmiar; i++)
        {
            m_tab[i]=NULL;
        }
    }
    ~ObjArray()
    {
        for(int i=0; i<m_rozmiar; i++)
        {
            delete m_tab[i];
        }
        delete m_tab;
    }
    //void *operator new (size_t rozmiar);
    void Set(size_t rozmiar, Object *obiekt);

    Object **m_tab;
    int m_rozmiar;

};