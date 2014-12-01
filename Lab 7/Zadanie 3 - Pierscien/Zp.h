#ifndef Pierscien
#define Pierscien
#include <stdlib.h>

class Zp{
    public:
        Zp(int pierw);
        Zp * dodaj(Zp & z, int a);
        Zp * odejmij(Zp & z, int a);
        Zp * podziel(Zp & z, int a);
        Zp * pomnoz(Zp & z, int a);

        static bool isPrime(int pierw);
        int pierscien;
        int wynik;
};

Zp::Zp(int pierw){
    pierscien = pierw;
    wynik = pierscien-1;
}

Zp * Zp::dodaj(Zp & z, int a){
    this->wynik = (a + z.wynik) % this->pierscien;
    return this;
}

Zp * Zp::odejmij(Zp & z, int a){
    this->wynik = abs((z.wynik - a) % this->pierscien);
    return this;
}

Zp * Zp::podziel(Zp & z, int a){
    this->wynik = (z.wynik / a) % this->pierscien;
    return this;
}

Zp * Zp::pomnoz(Zp & z, int a){
    this->wynik = (z.wynik * a ) % this->pierscien;
    return this;
}


bool Zp::isPrime(int number){
    for (int i = 2; i < number; i++) {
        if (number % i == 0 && i != number)
            return false;
    }
    return true;
}

#endif
