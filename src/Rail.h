#ifndef RAIL_H
#define RAIL_H
#include "Land.h"
#include <iostream>

using namespace std;

class Rail:public Land{
    public:
        Rail();
        Rail(string);
        ~Rail();
        void setRailCanvasWidth(int);
		int getRailCanvasWidth();
		void getParameters();
		void introduce();
		void initElement();
		void saveElement(char*);
    protected:
    private:
        int railCanvasWidth;
};

#endif // RAIL_H
