#include<iostream>
#include<string>

using namespace std;

int main(){
    string imie;

    cout << "Podaj swoje imie " << endl;
    cin >> imie;

    if(imie.at(imie.length()-1) == 'a'){
        cout << "Kobieta " << endl;
    }else{
        cout << "Mezczyzna " << endl;
    }

}
