#include<iostream>
#include<string>

using namespace std;

int main(){

    int liczba;
    bool correct = true;

    do{
        correct = true;
        cout << "Wybierz opcje " << endl;
        cin >> liczba;

        switch(liczba){
            case 1:
                cin >> liczba;
                cout << liczba+1 << endl;
                break;
            case 2:
                cin >> liczba;
                cout << liczba-2 << endl;
                break;
            case 3:
                cin >> liczba;
                cout << liczba*4 << endl;
                break;
            default:
                correct = false;
                break;
        }

    }while(!correct);

}
