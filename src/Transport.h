#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <iostream>

using namespace std;


class Transport{
    public:
        Transport();
        Transport(string);
        ~Transport();
        void setPassengers(int);
        int getPassengers();
        void setBrand(string);
        string getBrand();
        virtual void saveElement(char*);
        virtual void initElement();
        virtual void getParameters();
        virtual void introduce();
        virtual void setWheels(int s){}
        virtual int getWheels(){return -1;}
        virtual void setDisplacement(int s){}
		virtual int getDisplacement(){return -1;}
		virtual void setRailCanvasWidth(int s){}
		virtual int getRailCanvasWidth(){return -1;}
		virtual void setClearance(int s){}
        virtual int getClearance(){return -1;}
        virtual void setDeckSqare(int s){}
        virtual int getDeckSqare(){return -1;}
        virtual void setImmersionDepth(int s){}
        virtual int getImmersionDepth(){return -1;}
    protected:
    private:
        int passengers;
        string brand;
};

#endif
