#include <iostream>
using namespace std;

int main() 
{

    int miesiac;

    cout<< "Wybierz liczbe od 1 do 12."<<endl;
    cin>> miesiac;
    switch (miesiac)
    {
    case 1:
        cout<< "Styczen"<<endl;
        cout<< "Liczba dni: 31"<<endl;
        cout<< "W tym miesiacu jest pochmurno!";
        break;
    case 2:
        cout<< "Luty"<<endl;
        cout<< "Liczba dni: 28"<<endl;
        cout<< "W tym miesiacu jest pochmurno!";
        break;
    case 3:
        cout<< "Marzec"<<endl;
        cout<< "Liczba dni: 31"<<endl;
        cout<< "W tym miesiacu jest pochmurno!";
        break;
    case 4:
        cout<< "Kwiecien"<<endl;
        cout<< "Liczba dni: 30"<<endl;
        cout<< "W tym miesiacu jest slonecznie!";
        break;
    case 5:
        cout<< "Maj"<<endl;
        cout<< "Liczba dni: 31"<<endl;
        cout<< "W tym miesiacu jest slonecznie!";
        break;
    case 6:
        cout<< "Czerwiec"<<endl;
        cout<< "Liczba dni: 30"<<endl;
        cout<< "W tym miesiacu jest slonecznie!";
        break;
    case 7:
        cout<< "Lipiec"<<endl;
        cout<< "Liczba dni: 31"<<endl;
        cout<< "W tym miesiacu jest slonecznie!";
        break;
    case 8:
        cout<< "Sierpien"<<endl;
        cout<< "Liczba dni: 31"<<endl;
        cout<< "W tym miesiacu jest slonecznie!";
        break;
    case 9:
        cout<< "Wrzesien"<<endl;
        cout<< "Liczba dni: 30"<<endl;
        cout<< "W tym miesiacu jest slonecznie!";
        break;
    case 10:
        cout<< "Pazdziernik"<<endl;
        cout<< "Liczba dni: 31"<<endl;
        cout<< "W tym miesiacu jest pochmurno!";
        break;
    case 11:
        cout<< "Listopad"<<endl;
        cout<< "Liczba dni: 30"<<endl;
        cout<< "W tym miesiacu jest pochmurno!";
        break;
    case 12:
        cout<< "Grudzien"<<endl;
        cout<< "Liczba dni: 31"<<endl;
        cout<< "W tym miesiacu jest pochmurno!";
        break;

    default:
        cout<< "Wybrales liczbe spoza przedzialu.";
    
    }

    return 0;
}