#include "INTERFACE.h"

//-------- USTAWIENIA POCZATKOWE -----------------------------------
void INTERFACE::settings()
{
    korzen=NULL;
        for (int i=1; i<=16; i++)
    {
        pusty[i]=true;

    }
}
//-------- VOID USTAWIAJACY KURSOR W MIEJSCU X,Y NA EKRANIE --------

void INTERFACE::gotoxy(int x, int y)
{
  COORD c;
  c.X=x-1;
  c.Y=y-1;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
//-------- VOID WYSWIETLAJACY PLANSZE --------
void INTERFACE::wyswietl_drzewo()
{
system("CLS");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
//wyswietlenie pola gry

gotoxy(10,2); if (pusty[1]==true) cout<<"~"; else if (statek[1]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(15,2); if (pusty[2]==true) cout<<"~"; else if (statek[2]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(20,2); if (pusty[3]==true) cout<<"~"; else if (statek[3]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(25,2); if (pusty[4]==true) cout<<"~"; else if (statek[4]==true) cout<<"X"; else cout<<"P"<<endl;

gotoxy(10,3); if (pusty[5]==true) cout<<"~"; else if (statek[5]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(15,3); if (pusty[6]==true) cout<<"~"; else if (statek[6]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(20,3); if (pusty[7]==true) cout<<"~"; else if (statek[7]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(25,3); if (pusty[8]==true) cout<<"~"; else if (statek[8]==true) cout<<"X"; else cout<<"P"<<endl;

gotoxy(10,4); if (pusty[9]==true) cout<<"~"; else if (statek[9]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(15,4); if (pusty[10]==true) cout<<"~"; else if (statek[10]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(20,4); if (pusty[11]==true) cout<<"~"; else if (statek[11]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(25,4); if (pusty[12]==true) cout<<"~"; else if (statek[12]==true) cout<<"X"; else cout<<"P"<<endl;

gotoxy(10,5); if (pusty[13]==true) cout<<"~"; else if (statek[13]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(15,5); if (pusty[14]==true) cout<<"~"; else if (statek[14]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(20,5); if (pusty[15]==true) cout<<"~"; else if (statek[15]==true) cout<<"X"; else cout<<"P"<<endl;
gotoxy(25,5); if (pusty[16]==true) cout<<"~"; else if (statek[16]==true) cout<<"X"; else cout<<"P"<<endl;
cout<<endl<<endl<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

