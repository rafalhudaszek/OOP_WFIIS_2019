#pragma once

#include <iostream>

namespace agh
{   
    
    template <typename T>
    class Node
    {
    public:
        Node(T cos):m_cos(cos), m_next(nullptr){}

        Node &operator ++();
        T operator*()const;
        bool operator !=(const Node<T> wezel);

    
        T m_cos;
        Node *m_next;
    };


    template <typename T>
    class list
    {
    public:
        list():m_start(nullptr){}
        ~list(){}

        void push_back(T item);
        void print()const;
        Node<T> end()const;   ///czy to konieczne <T>
        Node<T> begin()const;

        using iterator = Node<T>;

    private:
        Node<T> *m_start;
    };

    template <typename T>
    void list<T>::push_back(T item)
    {
        if(m_start)
        {
            Node<T> *tmp=m_start;
            while(tmp->m_next)
            {
                tmp=tmp->m_next;
            }
            Node<T> *nowy=new Node<T>(item);
            tmp->m_next=nowy;
        }
        else
        {
            Node<T> *wsk=new Node<T>(item);
            m_start=wsk;
        }
    }

    template <typename T>
    void list<T>::print()const
    {
        Node<T> *tmp=m_start;
        while(tmp)
        {
            std::cout<<*tmp->m_cos<<", ";
            tmp=tmp->m_next;
        }
        std::cout<<std::endl;
    }

    template <typename T>
    Node<T> list<T>::end()const
    {
        Node<T> *tmp= m_start;
        while(tmp->m_next)
        {
            tmp=tmp->m_next;
        }
    return *tmp;
    }

    template <typename T>
    Node<T> list<T>::begin()const
    {
        return *m_start;
    }

    template <typename T>
    Node<T> &Node<T>::operator++()
    {
        this->m_next=this->m_next->m_next;
        this->m_cos=this->m_next->m_cos;
        return *this;
    }


    template <typename T>
    bool Node<T>::operator !=(const Node<T> node)
    {
        if((*this->m_cos) == (*node.m_cos))
		std::cout << (*this->m_cos) << std::endl;
	    return (*this->m_cos) != (*node.m_cos);
    }

    template <typename T>
    T Node<T>::operator*()const 
    {
        return m_cos;
    }


}