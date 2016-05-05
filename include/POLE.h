#include "INTERFACE.h"

#ifndef POLE_H
#define POLE_H


class POLE: public INTERFACE
{
    public:
        int wylosowane[ 4 ];
        int wylosowanych = 0;
        int liczba;
        bool czyPowtorzona();
        bool czyBylaWylosowana( int iLiczba, int tab[], int ile );
        int wylosuj();
        int losuj();
        int statek_dwu_masztowy(int &value);
        void strzal();
    protected:
    private:
};

#endif // POLE_H
