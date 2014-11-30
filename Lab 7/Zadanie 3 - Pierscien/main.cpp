#include <iostream>
#include "Zp.h"



int main()
{
    int passToCst = 13;

    Zp obj(passToCst);
    Zp z(14);

    obj.dodaj(z, 4);
    std::cout << z.wynik << std::endl;
    obj.odejmij(z, 11);
    std::cout << z.wynik << std::endl;
    obj.pomnoz(z, 5);
    std::cout << z.wynik << std::endl;
    obj.podziel(z, 7);
    std::cout << z.wynik << std::endl;

    /*
    Zp *g;
    if(Zp::isPrime(13)){
        g = new Zp(13);
    }
    std::cout << (*g).wynik << std::endl;

    std::cout << obj.dodaj(6, 15) << std::endl;
    std::cout << obj.getWynik() << std::endl;
    */
}
