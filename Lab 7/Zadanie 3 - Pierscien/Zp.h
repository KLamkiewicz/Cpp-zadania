#ifndef Pierscien
#define Pierscien
#include <stdlib.h>

class Zp{
    public:
        Zp(int pierw);
        Zp & dodaj(Zp & z, int a);
        Zp & odejmij(Zp & z, int a);
        Zp & podziel(Zp & z, int a);
        Zp & pomnoz(Zp & z, int a);

        static bool isPrime(int pierw);
        int pierscien;
        int wynik;
};

Zp::Zp(int pierw){
    pierscien = pierw;
    wynik = pierscien-1;
}

Zp & Zp::dodaj(Zp & z, int a){
    z.wynik = (a + this->wynik) % this->pierscien;
    return z;
}

Zp & Zp::odejmij(Zp & z, int a){
    z.wynik = abs((this->wynik - a) % this->pierscien);
    return z;
}

Zp & Zp::podziel(Zp & z, int a){
    z.wynik = (this->wynik / a) % this->pierscien;
    return z;
}

Zp & Zp::pomnoz(Zp & z, int a){
    z.wynik = (this->wynik * a ) % this->pierscien;
    return z;
}


bool Zp::isPrime(int number){
    for (int i = 2; i < number; i++) {
        if (number % i == 0 && i != number)
            return false;
    }
    return true;
}

#endif
