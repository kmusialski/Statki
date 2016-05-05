#include <iostream>
#include <windows.h>
#include <cstdlib>
#include "INTERFACE.h"
#include "POLE.h"
using namespace std;

//---------------------- ZMIENNE GLOBALNE----------------------------
int wybor;
int *tura= 0;
int koniec = 0;
char b = 'X';
char znak = 'X';
int pole;


//-------------------------- ZMIENNE ------------------------------

  INTERFACE i = INTERFACE();
  POLE p = POLE();

//----------------------- G£OWNY PROGRAM ----------------------------
int main()
{
    p.settings();
     p.losuj();
    do
    {
            p.wyswietl_drzewo();
            cout<<"----------------------------------"<<endl;
            cout<<"   Gra w statki "<<endl;
            cout<<"----------------------------------"<<endl;
            cout<<"Pola"<<endl;
            cout<<"1  - 2  - 3  - 4  - 5"<<endl;
            cout<<"6  - 7  - 8  - 9  - 10"<<endl;
            cout<<"11 - 12 - 13 - 14 - 15"<<endl;
            cout<<"16 - 17 - 18 - 19 - 20"<<endl;
            cout<<"21 - 22 - 23 - 24 - 25"<<endl;
            cout<<"----------------------------------"<<endl;
            cout<<"Tura gracza "<<znak<<endl;
            cout<<"----------------------------------"<<endl;
            cout<<"Wpisz 10 zeby zakonczyc"<<endl;
            cout<<" niebieska ~ - oznacza nieodkryty obszar"<<endl;
            cout<<" zolte P oznacza pudlo"<<endl;
            cout<<" czerwony X oznacza trafienie"<<endl;
            cout<<"----------------------------------"<<endl;
            cout<<"Podaj pole"<<endl;
            cin>>pole;
            p.statek_dwu_masztowy(pole);
    }
    while(pole!=30);
    return 0;
}
