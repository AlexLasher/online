#ifndef LAND_H
#define LAND_H
#include "Transport.h"
#include <iostream>

using namespace std;


class Land:public Transport{
    public:
        Land();
        Land(string);
        ~Land();
        void setWheels(string);
		string getWheels();
		void getParameters();
		void introduce();
		void initElement();
		void saveElement(char*);
    protected:
    private:
		string wheels;
};

#endif // LAND_H
