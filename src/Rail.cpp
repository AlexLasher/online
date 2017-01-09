#include "Rail.h"
#include <fstream>

Rail::Rail(){
    //ctor
}

Rail::Rail(string s){
    setBrand(s);
}

Rail::~Rail(){
    //dtor
}

void Rail::setRailCanvasWidth(int val){
    railCanvasWidth=val;
}

int Rail::getRailCanvasWidth(){
    return railCanvasWidth;
}

void Rail::getParameters(){
    Land::getParameters();
    cout<<"Ўирина рельсового полотна: ";
    cout<<getRailCanvasWidth()<<endl;
}

void Rail::introduce(){
    cout<<getBrand()<<endl;
}

void Rail::initElement(){
	Land::initElement();
	cout<<"¬ведите значение ширины рельсового полотна: "<<endl;
	while (!(cin >> railCanvasWidth)){
		cin.clear();
		while ( cin.get() != '\n' ) continue;
		cout << "ќшибка! ¬ведите целое число: "<<endl;
	}
}

void Rail::saveElement(char* fileName){
	Land::saveElement(fileName);
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"ќшибка чтени€ файла"<<endl;
		fout.close();
	} else{
		fout<<"Ўирина рельсового полотна: "<<getRailCanvasWidth()<<endl;
		fout.close();
	}
}
