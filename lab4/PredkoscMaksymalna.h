#pragma once 


class PredkoscMaksymalna
{
public:
    PredkoscMaksymalna(const int value):m_maxspeed(value){}

    int get_speed()const{return m_maxspeed;}
    
private:

    int m_maxspeed;
};

std::ostream &operator <<(std::ostream & write, const PredkoscMaksymalna &obj)
{
    return write<<obj.get_speed();
}