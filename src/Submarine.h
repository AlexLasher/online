#ifndef SUBMARINE_H
#define SUBMARINE_H
#include "Sea.h"
#include <iostream>

using namespace std;

class Submarine:public Sea{
    public:
        Submarine();
        Submarine(string,string,string,string);
        ~Submarine();
        void setImmersionDepth(string);
        string getImmersionDepth();
        void getParameters();
        void introduce();
        void initElement();
        void saveElement(char*);
    protected:
    private:
        string immersionDepth;
};

#endif // SUBMARINE_H
