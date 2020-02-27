#pragma once

class Pojazd
{
public:
    virtual ~Pojazd()=default;

    virtual std::string type()const =0;

};

std::ostream &operator <<(std::ostream &write, const Pojazd &obj)
{
    return write<<obj.type();
}