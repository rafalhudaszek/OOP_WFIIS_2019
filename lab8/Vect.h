#pragma once

#include "Swapper.h"


template <typename T>
class Vect
{
public:
    Vect(const int size)
    {
        m_size = size;
        m_array = new T [size];
    }

    int size()const {return m_size;}

    T &operator [](const int position)const
    {
        return m_array[position];
    }

    void buble_sort(bool (*compare)(const T& a, const T& b))
    {
        for (unsigned i = 0; i < m_size; i++ )
        {
            for (unsigned j = i+1; j < m_size; ++j ) 
            {
                if ( !compare(m_array[j], m_array[i]) )
                {
                    Swapper<T, is_pod<T>::pod>::swap( m_array[i], m_array[j] );
                }   
            }
        } 
    }


private:
    T *m_array;
    int m_size;
};
