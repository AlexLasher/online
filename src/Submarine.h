#ifndef SUBMARINE_H
#define SUBMARINE_H
#include "Sea.h"
#include <iostream>

using namespace std;

class Submarine:public Sea{
    public:
        Submarine();
        Submarine(string);
        ~Submarine();
        void setImmersionDepth(int);
        int getImmersionDepth();
        void getParameters();
        void introduce();
        void initElement();
        void saveElement(char*);
    protected:
    private:
        int immersionDepth;
};

#endif // SUBMARINE_H
