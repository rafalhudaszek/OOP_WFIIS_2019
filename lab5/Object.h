#pragma once 

#include <string>

class Object
{
public:

    Object(std::string name);
    ~Object();

    void Skip();


    std::string m_name;

};