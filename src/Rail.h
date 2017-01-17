#ifndef RAIL_H
#define RAIL_H
#include "Land.h"
#include <iostream>

using namespace std;

class Rail:public Land{
    public:
        Rail();
        Rail(string,string,string,string);
        ~Rail();
        void setRailCanvasWidth(string);
        string getRailCanvasWidth();
		void getParameters();
		void introduce();
		void initElement();
		void saveElement(char*);
    protected:
    private:
		string railCanvasWidth;
};

#endif // RAIL_H
