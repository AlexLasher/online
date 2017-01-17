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
    protected:
    private:
        string passengers;
        string brand;
};

#endif
