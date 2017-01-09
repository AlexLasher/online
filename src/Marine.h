#ifndef MARINE_H
#define MARINE_H
#include "Sea.h"
#include <iostream>

using namespace std;

class Marine:public Sea{
    public:
        Marine();
        Marine(string);
        ~Marine();
        void setDeckSqare(int);
        int getDeckSqare();
        void getParameters();
        void introduce();
        void initElement();
        void saveElement(char*);
    protected:
    private:
        int deckSqare;
};
#endif // MARINE_H
