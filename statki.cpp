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




//-------------------------- ZMIENNE ------------------------------

  INTERFACE i = INTERFACE();
  POLE p = POLE();



//----------------------- G�OWNY PROGRAM ----------------------------
int main()
{
    p.settings();
   // createINTERFACE();
  //  do
  //  {
        p.wyswietl_drzewo();
            cout<<"----------------------------------"<<endl;
            cout<<"   Gra w statki "<<endl;
            cout<<"----------------------------------"<<endl;
            cout<<"Pola"<<endl;
            cout<<"1 - 2 -  3 -  4"<<endl;
            cout<<"5 - 6 -  7 -  8"<<endl;
            cout<<"9 - 10 - 11 - 12"<<endl;
            cout<<"13 -14 - 15 - 16"<<endl;
            cout<<"----------------------------------"<<endl;
            //cout<<"Tura gracza "<<znak<<endl;
            cout<<"----------------------------------"<<endl;
            cout<<"Wpisz 10 zeby zakonczyc"<<endl;
            cout<<"----------------------------------"<<endl;

        p.losuj();
       // p.wygrana(&tura,&koniec);
    }





  /*
        if(koniec==10){break;}
        else{
            cin>>wybor;
            cout<<endl;
            if (wybor > 0 && wybor < 10)
            {
                p.pole(wybor, &znak);
               // gracz = p.sprawdz();

               // gracz =

            }
            else if (wybor != 10)
            {
                cout<<"Podaj liczbe w naturalna w zakresie 1-9"<<endl;
            }
        }
    }
    while(koniec!=10);
    return 0;
}
*/