#include <iostream>
using namespace std;

int main ()
{
    int a, b, obwod;

    cout<<"Podaj liczbe a: ";
    cin>>a;

    cout<<"Podaj liczbe b: ";
    cin>>b;

    cout<<"\n";
    cout<<"Wiersz o dlugosci a: "<<endl;

    for (int i = 1; i <= a; i++)
    {
        cout<<"*";
    }

    cout<<"\n";
    cout<<"Kolumna o dlugosci b: "<<endl;

    for (int i = 1; i <= b; i++)
    {
        cout<<"*";
        cout<<"\n";
    }
    cout<<"Prostokat o wymiarach 'a' na 'b': "<<endl;

     for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout<<"*";
        }
        cout<<"\n";

    }
    
    cout<<"Obwod prostokata o wymiarach 'a' na 'b': "<<endl;

    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if ((i==1) || (i==b) || (j==1) || (j==a))
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
            
        } 
        cout<<"\n";  
    }






    return 0;
}