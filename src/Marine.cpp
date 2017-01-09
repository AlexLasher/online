#include "Marine.h"
#include <fstream>

Marine::Marine()
{
    //ctor
}

Marine::Marine(string s){
    setBrand(s);
}

Marine::~Marine()
{
    //dtor
}

void Marine::setDeckSqare(int val){
    deckSqare=val;
}

int Marine::getDeckSqare(){
    return deckSqare;
}

void Marine::getParameters(){
    Sea::getParameters();
    cout<<"Площадь палубы: ";
    cout<<getDeckSqare()<<endl;
}

void Marine::introduce(){
    cout<<getBrand()<<endl;
}

void Marine::initElement(){
	Sea::initElement();
	cout<<"Введите значение площади палубы: "<<endl;
	while (!(cin >> deckSqare)){
		cin.clear();
		while ( cin.get() != '\n' ) continue;
		cout << "Ошибка! Введите целое число: "<<endl;
	}
}

void Marine::saveElement(char* fileName){
	Sea::saveElement(fileName);
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"Ошибка чтения файла"<<endl;
		fout.close();
	} else{
		fout<<"Площадь палубы: "<<getDeckSqare()<<endl;
		fout.close();
	}
}
