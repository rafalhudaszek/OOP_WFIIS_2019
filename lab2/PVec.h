#pragma once 
#include "StringWrapper.h"
#include "Wrapper.h"
#include "IntWrapper.h"
#include "FloatWrapper.h"
#include <iostream>

struct Node
{
    Node *wsk_next;
    Wrapper *wsk_wrap;
};

class PVec
{
public:
    
    friend std::ostream &operator <<(std::ostream & cos,const PVec &obiekt);
    PVec &push_back(Wrapper *obiekt);
    void operator <<(Wrapper *obiekt);
    Wrapper &operator[](int spot);
    Node *get_wsk()const;
    
    PVec();
    ~PVec();
private:
    Node *wsk_first;

};

PVec::PVec()
{
    wsk_first=NULL;
}

PVec &PVec::push_back(Wrapper *obiekt)
{
    Node *New_Node= new Node;
    New_Node->wsk_next=NULL;
    New_Node->wsk_wrap=obiekt;

    if(!wsk_first)
    {
        wsk_first=New_Node;
    }
    else
    {   
        Node *tmp=wsk_first;
        while(tmp->wsk_next)
        {
            tmp=tmp->wsk_next;
        }
        
        tmp->wsk_next=New_Node;

    }
    return *this;
}

std::ostream &operator <<(std::ostream & cos,const PVec &obiekt)
{
    Node *tmp=obiekt.get_wsk();
    while(tmp->wsk_next)
    {
        tmp->wsk_wrap->print(cos);
        tmp=tmp->wsk_next;
    }
    tmp->wsk_wrap->print(cos);
    return cos;
}

void PVec::operator <<(Wrapper *obiekt)
{
    push_back(obiekt);
}

Node *PVec::get_wsk()const
{
    return wsk_first;
}

PVec::~PVec()
{
    delete [] wsk_first;
}

Wrapper &PVec::operator[](int spot)
{
    Node *tmp=wsk_first;
    for(int i=0; i<spot;i++)
    {
        tmp=tmp->wsk_next;
    }
    return *(tmp->wsk_wrap);
}