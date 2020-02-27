#pragma once
#include <iostream>
#include <string.h>


template<typename T>
struct is_pod {
public:    
    const static bool pod = false;
};


template<typename T, bool val = false>
class Swapper {
public:


    static void swap(T &val_1, T &val_2)
    {
        if(!val)
        {
            T temp=val_1;
            val_1=val_2;
            val_2=temp;
        }
        else
        {
            unsigned size = sizeof(T);
            T temp;
            memcpy(&temp, &val_1, size) ;
            memcpy(&val_1, &val_2, size);
            memcpy(&val_2, &temp, size);            
        }
    }
};

