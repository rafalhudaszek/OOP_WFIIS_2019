#pragma once
#include <iostream>
class Wrapper
{
public: 
    virtual void print(std::ostream &tmp)const =0;
    virtual ~Wrapper()
    {
        std::cout<<"Destruktorek"<<std::endl;
    }

};