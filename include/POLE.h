#include "INTERFACE.h"

#ifndef POLE_H
#define POLE_H


class POLE: public INTERFACE
{
    public:
        char gracz;
        int wybor;
        int koniec;
        int tura;
        char* pole(int wybor, char *znak);
        char* sprawdz();
        int wygrana(int* tura,int* number);

        int ktory;
        bool czyBylaWylosowana( int iLiczba, int tab[], int ile );
        int wylosuj();
        int losuj();
        void statek_dwu_masztowy();
    protected:
    private:
};

#endif // POLE_H
