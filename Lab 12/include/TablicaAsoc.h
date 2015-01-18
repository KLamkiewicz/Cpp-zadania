#ifndef TABLICAASOC_H
#define TABLICAASOC_H
#include <iostream>
#include "Lista.h"

template <typename T1, typename T2>
class TablicaAsoc
{

    public:
        TablicaAsoc();
        void show();
        int size();
        void add(T1, T2);
        virtual T2 & operator[](T1 i);
    protected:
    private:
        T1 test;
        Lista<T1,T2> l;

};

template <typename T1, typename T2>
TablicaAsoc<T1, T2>::TablicaAsoc(){
}

template <typename T1, typename T2>
void TablicaAsoc<T1, T2>::show(){
    l.printList();
}

template <typename T1, typename T2>
void TablicaAsoc<T1, T2>::add(T1 t1, T2 t2){
    l.addElement(t1, t2);
}

template <typename T1, typename T2>
T2& TablicaAsoc<T1, T2>::operator[](T1 i){
    T2 &t2 = l.addElement(i);
    return t2;
}

template <typename T1, typename T2>
int TablicaAsoc<T1, T2>::size(){
    return l.getSize();
}


#endif // TABLICAASOC_H
