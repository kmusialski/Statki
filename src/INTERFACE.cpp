#include "INTERFACE.h"

//-------- USTAWIENIA POCZATKOWE -----------------------------------
void INTERFACE::settings()
{
    korzen=NULL;
        for (int i=1; i<=25; i++)
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
set_color_default();
//SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY ) ;
//wyswietlenie pola gry

gotoxy(10,2); if (pusty[1]==true) cout<<"~"; else if (statek[1]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(15,2); if (pusty[2]==true) cout<<"~"; else if (statek[2]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(20,2); if (pusty[3]==true) cout<<"~"; else if (statek[3]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(25,2); if (pusty[4]==true) cout<<"~"; else if (statek[4]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(30,2); if (pusty[5]==true) cout<<"~"; else if (statek[5]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(10,4); if (pusty[6]==true) cout<<"~"; else if (statek[6]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(15,4); if (pusty[7]==true) cout<<"~"; else if (statek[7]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(20,4); if (pusty[8]==true) cout<<"~"; else if (statek[8]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(25,4); if (pusty[9]==true) cout<<"~"; else if (statek[9]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(30,4); if (pusty[10]==true) cout<<"~"; else if (statek[10]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(10,6); if (pusty[11]==true) cout<<"~"; else if (statek[11]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(15,6); if (pusty[12]==true) cout<<"~"; else if (statek[12]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(20,6); if (pusty[13]==true) cout<<"~"; else if (statek[13]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(25,6); if (pusty[14]==true) cout<<"~"; else if (statek[14]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(30,6); if (pusty[15]==true) cout<<"~"; else if (statek[15]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(10,8); if (pusty[16]==true) cout<<"~"; else if (statek[16]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(15,8); if (pusty[17]==true) cout<<"~"; else if (statek[17]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(20,8); if (pusty[18]==true) cout<<"~"; else if (statek[18]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(25,8); if (pusty[19]==true) cout<<"~"; else if (statek[19]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(30,8); if (pusty[20]==true) cout<<"~"; else if (statek[20]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(10,10); if (pusty[21]==true) cout<<"~"; else if (statek[21]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(15,10); if (pusty[22]==true) cout<<"~"; else if (statek[22]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(20,10); if (pusty[23]==true) cout<<"~"; else if (statek[23]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(25,10); if (pusty[24]==true) cout<<"~"; else if (statek[24]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;
set_color_default();
gotoxy(30,10); if (pusty[25]==true) cout<<"~"; else if (statek[25]==true) set_color_hit(), cout<<"X"; else set_color(),cout<<"P"<<endl;

cout<<endl<<endl<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void INTERFACE::set_color()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
}

void INTERFACE::set_color_default()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
}

void INTERFACE::set_color_hit()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
}

