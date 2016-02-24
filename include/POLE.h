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

        bool czyBylaWylosowana( int iLiczba, int tab[], int ile );
        int wylosuj();
        int losuj();
        void statki();
    protected:
    private:
};

#endif // POLE_H
