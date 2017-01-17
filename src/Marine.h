#ifndef MARINE_H
#define MARINE_H
#include "Sea.h"
#include <iostream>

using namespace std;

class Marine:public Sea{
    public:
        Marine();
        Marine(string,string,string,string);
        ~Marine();
        void setDeckSqare(string);
        string getDeckSqare();
        void getParameters();
        void introduce();
        void initElement();
        void saveElement(char*);
    protected:
    private:
        string deckSqare;
};
#endif // MARINE_H
