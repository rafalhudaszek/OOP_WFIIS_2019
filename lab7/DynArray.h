#pragma once 
#include <iostream>


template <typename T>
class DynArray
{
public:
    DynArray(const int size)
    {
    m_size=size;
    m_tab= new T [m_size];
    }

    DynArray(const int size, const T *strings)
    {
        m_size=size;
        m_tab= new T [m_size];
        for(int i=0; i<m_size; i++)
        {
            m_tab[i]=strings[i];
        }
    }

    ~DynArray()
    {

    }

    int size()const {return m_size;}

    T &operator [](const int position) const
    {
        return m_tab[position];
    }  


    class Iterator
    {
    public:
        Iterator(T *obj) 
        {
            m_tab=obj;
        }

        void operator ++()
        {
            m_tab++;
           // return this;
        }

        bool operator !=(const Iterator &obj)
        {
            return m_tab!=obj.m_tab;
        }

        T operator *()
        {
            return *m_tab;
        }

        T * operator ->()
        {
            return m_tab;
        }


    private:
        T *m_tab;

    };
    
    
    Iterator begin()
    {
        return Iterator(m_tab);
    }

    Iterator end()
    {
        return Iterator(m_tab+m_size);
    }

private:
    T *m_tab;
    int m_size;


};


template <typename T>
std::ostream &operator <<(std::ostream &write, const DynArray<T> &obj)
{
    write<<" {";
    for(int i=0; i<obj.size(); i++)
    {
        write<<"''"<<obj[i]<<"'',";
    }
    write<<"}";
    return write;
}








































/*#pragma once 
#include <iostream>
template <typename T>
class DynArray
{
public:
    DynArray(const int size);
    ~DynArray();

    int size()const {return m_size;}

    T &operator [](const int position)const ;  //chyba const

private:
    T *m_tab;
    int m_size;


};

template <typename T>
std::ostream &operator <<(std::ostream &write, const DynArray<T> &obj)
{
    write<<" {";
    for(int i=0; i<obj.size(); i++)
    {
        write<<"''"<<obj[i]<<"'',";
    }
    write<<"}"<<std::endl;
    return write;
} */