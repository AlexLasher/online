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
    cout<<"������� ����������: ";
    cout<<getImmersionDepth()<<endl;
}

void Submarine::introduce(){
    cout<<getBrand()<<endl;
}

void Submarine::initElement(){
	Sea::initElement();
	cout<<"������� �������� ������� ����������: "<<endl;
	while (!(cin >> immersionDepth)){
		cin.clear();
		while ( cin.get() != '\n' ) continue;
		cout << "������! ������� ����� �����: "<<endl;
	}
}

void Submarine::saveElement(char* fileName){
	Sea::saveElement(fileName);
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"������ ������ �����"<<endl;
		fout.close();
	} else{
		fout<<"������� ����������: "<<getImmersionDepth()<<endl;
		fout.close();
	}
}
