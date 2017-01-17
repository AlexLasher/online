#ifndef ROAD_H
#define ROAD_H
#include "Land.h"
#include <iostream>

using namespace std;

class Road:public Land{
    public:
        Road();
        Road(string,string,string,string);
        ~Road();
        void setClearance(string);
        string getClearance();
        void getParameters();
        void introduce();
        void initElement();
        void saveElement(char*);
    protected:
    private:
        string clearance;
};

#endif // ROAD_H
