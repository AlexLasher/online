#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <iostream>

using namespace std;


class Transport{
    public:
        Transport();
        Transport(string);
        ~Transport();
        void setPassengers(string);
        string getPassengers();
        void setBrand(string);
        string getBrand();
        virtual void saveElement(char*);
        virtual void initElement();
        virtual void getParameters();
        virtual void introduce();
        virtual void setWheels(string s){}
        virtual string getWheels(){return 0;}
        virtual void setDisplacement(string s){}
		virtual string getDisplacement(){return 0;}
		virtual void setRailCanvasWidth(string s){}
		virtual string getRailCanvasWidth(){return 0;}
		virtual void setClearance(string s){}
        virtual string getClearance(){return 0;}
        virtual void setDeckSqare(string s){}
        virtual string getDeckSqare(){return 0;}
        virtual void setImmersionDepth(string s){}
        virtual string getImmersionDepth(){return 0;}
    protected:
    private:
        string passengers;
        string brand;
};

#endif
