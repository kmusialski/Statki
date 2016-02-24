#include "POLE.h"

//------------------- SPRAWDZENIE WYGRANEJ --------------------------
int POLE::wygrana(int *tura,int *koniec)
{

   if(  ((dane[1]==dane[2]) && (dane[2]==dane[3])) && (dane[1] !=NULL) ||
        (dane[4]==dane[5] && dane[5]==dane[6]) && (dane[4] !=NULL) ||
        (dane[7]==dane[8] && dane[8]==dane[9]) && (dane[7] !=NULL) ||
        (dane[1]==dane[4] && dane[4]==dane[7]) && (dane[4] !=NULL) ||
        (dane[2]==dane[5] && dane[5]==dane[8]) && (dane[5] !=NULL) ||
        (dane[3]==dane[6] && dane[6]==dane[9]) && (dane[3] !=NULL) ||
        (dane[1]==dane[5] && dane[5]==dane[9]) && (dane[1] !=NULL) ||
        (dane[3]==dane[5] && dane[5]==dane[7]) && (dane[3] !=NULL) )
   {

     cout<<"KONIEC GRY"<<endl;
    cout<<"WYGRAL GRACZ "<<(*tura)<<endl;
    (*koniec) = 10;
    return *tura,*koniec;
   }
return *tura,*koniec;
}
//------------------- DODAJ LICZBE DO DRZEWA ------------------------
char* POLE::pole(int wybor, char *znak)
{
   znak = sprawdz();
    if (pusty[wybor]==true)
    {

        korzen=&dane[wybor]; //
        *korzen=*znak;
        pusty[wybor]=false;
    }
return znak;
}
//-------------------SPRAWDZENIE CZY KOLKO CZY KRZYZYK---------------
char* POLE::sprawdz()
{

if ((tura) == 0)
{
    //symbol
    gracz= 'X';
    (tura) = 1;
} else if((tura) == 1)
{
    //symbol
    gracz= 'O';
    (tura) = 0;
}
return &gracz;
//&symbol;
}



bool POLE::czyBylaWylosowana( int iLiczba, int tab[], int ile )
{
    if( ile <= 0 )
         return false;

    int i = 0;
    do
    {
        if( tab[ i ] == iLiczba )
             return true;

        i++;
    } while( i < ile );

    return false;
}

int POLE::wylosuj()
{
    return( rand() % 10 ) + 1;
}

int POLE::losuj()
{
    srand( time( 0 ) );

    do
    {
        liczba = wylosuj();
        if( czyBylaWylosowana( liczba, wylosowane, wylosowanych ) == false )
        {
            wylosowane[ wylosowanych ] = liczba;
            wylosowanych++;
        } //if
    } while( wylosowanych < 1 );

    wylosowanych = 0;
    do
    {
        std::cout << wylosowane[ wylosowanych ] << std::endl;
        wylosowanych++;
    } while( wylosowanych < 1 );


    statki();
    return 0;
}

void POLE::statki()
{
    for( int i = 1; i <= 16; i++)
    {
       if (dane[i] == wylosowane [wylosowanych])
       {
           statek[i] = true;
       }
    }
}

