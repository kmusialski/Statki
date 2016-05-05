#include "POLE.h"


//-------------------LOSOWANIE POLOZENIA STATKU---------------

bool POLE::czyBylaWylosowana( int iLiczba, int tab[], int ile )
{
    if( ile <= 0 )
         return false;

    int i = 0;
    do
    {
        if( tab[ i ] == iLiczba )
            {
                return true;
            }

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

    do
    {
        liczba = wylosuj();
        if( czyBylaWylosowana( liczba, wylosowane, wylosowanych ) == false )
        {
            wylosowane[ wylosowanych ] =  liczba;
            wylosowanych++;
        }
    } while( wylosowanych < 3 );

    if(czyPowtorzona()== false)
    {
        wylosowane[4] = wylosowane[0]+5;
    }

}

bool POLE::czyPowtorzona()
{
    for(int i = 1; i<4; i++)
    {
        if((wylosowane[0]+5) == wylosowane[i])
        {
            return true;
        }
    }
return false;
}

int POLE::statek_dwu_masztowy(int &value)
{

pusty[value] = false;



//------------1 masztwoy -----------------
for(int i= 0; i<5;i++)
{
    if (value == wylosowane[i])
    {
        statek[wylosowane[i]] = true;
    }
}
   /*
if ( value == wylosowane[0] )
{ statek[wylosowane[0]] = true;
}

//------------2 masztowy------------------

if ( value == wylosowane[1]  )
{ statek[wylosowane[1]] = true;
}
else if (value == (wylosowane[1]+1))
{
   statek[wylosowane[1]+1] = true;
}
//-------------1 masztowy -----------------
if ( value == wylosowane[2] )
{ statek[wylosowane[2]] = true;
}
*/

return value;
}

