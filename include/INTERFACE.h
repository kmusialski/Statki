#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#ifndef INTERFACE_H
#define INTERFACE_H

using namespace std;
class INTERFACE

{
    public:
    char dane[25];
    bool pusty[25];
    bool statek[25];
    int strzal;
    char *korzen;
        void set_color();
        void set_color_hit();
        void set_color_default();
        void settings();
        void gotoxy(int x, int y);
        void wyswietl_drzewo();
    protected:
    private:
};

#endif // INTERFACE_H
