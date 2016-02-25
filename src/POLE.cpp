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
        if( tab[ i ] == iLiczba || pusty[i] == false)
             return true;

        i++;
    } while( i < ile );

    return false;
}

int POLE::wylosuj()
{
    return( rand() % 25 ) + 1;
}

int POLE::losuj()
{
    srand( time( 0 ) );
    int wylosowane[ 1 ];
    int wylosowanych = 0;
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

        ktory = wylosowane[wylosowanych];
     //   statek_dwu_masztowy();
        wylosowanych++;
    } while( wylosowanych < 1 );



    return 0;
}

int POLE::statek_dwu_masztowy(int &value)
{


pusty[value] = false;
//pusty[ktory+1] = false;
if ( value == ktory )
{ statek[ktory] = true;
}
else{
statek[ktory] = false;

return value;
}
   // for( int i = 1; i <= 16; i++)
   // {
   //    if (dane[i] == wylosowane [wylosowanych])
    //   {
   //        statek[i] = true;
   //    }
}


