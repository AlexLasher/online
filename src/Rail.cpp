#include "Rail.h"
#include <fstream>

Rail::Rail(){
    //ctor
}

Rail::Rail(string name,string pass,string wheel,string canvas){
    setBrand(name);
    setPassengers(pass);
    setWheels(wheel);
    setRailCanvasWidth(canvas);
}

Rail::~Rail(){
    //dtor
}

void Rail::setRailCanvasWidth(string val){
    railCanvasWidth=val;
}

string Rail::getRailCanvasWidth(){
    return railCanvasWidth;
}

void Rail::getParameters(){
    Land::getParameters();
    cout<<"Ширина рельсового полотна: ";
    cout<<getRailCanvasWidth()<<endl;
}

void Rail::introduce(){
    cout<<getBrand()<<endl;
}

void Rail::initElement(){
	Land::initElement();
	cout<<"Введите значение ширины рельсового полотна: "<<endl;
	while (!(cin >> railCanvasWidth)){
		cin.clear();
		while ( cin.get() != '\n' ) continue;
		cout << "Ошибка! Введите целое число: "<<endl;
	}
}

void Rail::saveElement(char* fileName){
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"\nОшибка чтения файла\n"<<endl;
		fout.close();
	} else{
		fout<<"Поезд"<<endl;
		fout<<getBrand()<<endl;
		fout<<getPassengers()<<endl;
		fout<<getWheels()<<endl;
		fout<<getRailCanvasWidth()<<endl;
		fout.close();
	}
}
