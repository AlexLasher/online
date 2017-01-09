#ifndef ROAD_H
#define ROAD_H
#include "Land.h"
#include <iostream>

using namespace std;

class Road:public Land{
    public:
        Road();
        Road(string);
        ~Road();
        void setClearance(int);
        int getClearance();
        void getParameters();
        void introduce();
        void initElement();
        void saveElement(char*);
    protected:
    private:
        int clearance;
};

#endif // ROAD_H
