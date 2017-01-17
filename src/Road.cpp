#include "Road.h"
#include <fstream>

Road::Road(){
    //ctor
}

Road::Road(string name,string pass,string wheel,string clear){
    setBrand(name);
    setPassengers(pass);
    setWheels(wheel);
    setClearance(clear);
}

Road::~Road(){
    //dtor
}

void Road::setClearance(string val){
    clearance=val;
}

string Road::getClearance(){
    return clearance;
}

void Road::getParameters(){
    Land::getParameters();
    cout<<"Значение клиренса: ";
    cout<<getClearance()<<endl;
}

void Road::introduce(){
    cout<<getBrand()<<endl;
}

void Road::initElement(){
	Land::initElement();
	cout<<"Введите значение клиренса: "<<endl;
	while (!(cin >> clearance)){
		cin.clear();
		while ( cin.get() != '\n' ) continue;
		cout << "Ошибка! Введите целое число: "<<endl;
	}
}

void Road::saveElement(char* fileName){
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"\nОшибка чтения файла\n"<<endl;
		fout.close();
	} else{
		fout<<"Автомобиль"<<endl;
		fout<<getBrand()<<endl;
		fout<<getPassengers()<<endl;
		fout<<getWheels()<<endl;
		fout<<getClearance()<<endl;
		fout.close();
	}
}
