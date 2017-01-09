#include "Submarine.h"
#include <fstream>

Submarine::Submarine(){
    //ctor
}

Submarine::Submarine(string s){
    setBrand(s);
}

Submarine::~Submarine(){
    //dtor
}

void Submarine::setImmersionDepth(int val){
    immersionDepth=val;
}

int Submarine::getImmersionDepth(){
    return immersionDepth;
}

void Submarine::getParameters(){
    Sea::getParameters();
    cout<<"Глубина погружения: ";
    cout<<getImmersionDepth()<<endl;
}

void Submarine::introduce(){
    cout<<getBrand()<<endl;
}

void Submarine::initElement(){
	Sea::initElement();
	cout<<"Введите значение глубины погружения: "<<endl;
	while (!(cin >> immersionDepth)){
		cin.clear();
		while ( cin.get() != '\n' ) continue;
		cout << "Ошибка! Введите целое число: "<<endl;
	}
}

void Submarine::saveElement(char* fileName){
	Sea::saveElement(fileName);
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"Ошибка чтения файла"<<endl;
		fout.close();
	} else{
		fout<<"Глубина погружения: "<<getImmersionDepth()<<endl;
		fout.close();
	}
}
