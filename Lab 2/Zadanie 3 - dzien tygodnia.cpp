#include<iostream>

using namespace std;

int main(){

    string dniTygodnia[7] = {"Poniedzialek", "Wtorek", "Sroda", "Czwartek", "Piatek", "Sobota", "Niedziela"};
    int ile;
    int day;

    do{
        cout << "Podaj dzien tygodnia 1-7" << endl;
        cin >> day;
    }while(day>7 || day<1);

    do{
        cout << "Podaj liczbe dni do obliczenia dnia " << endl;
        cin >> ile;
    }while(ile<0);

    cout << dniTygodnia[(day+ile-1)%7] << endl;

}
