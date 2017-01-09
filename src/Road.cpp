#include "Road.h"
#include <fstream>

Road::Road(){
    //ctor
}

Road::Road(string s){
    setBrand(s);
}

Road::~Road(){
    //dtor
}

void Road::setClearance(int val){
    clearance=val;
}

int Road::getClearance(){
    return clearance;
}

void Road::getParameters(){
    Land::getParameters();
    cout<<"�������� ��������: ";
    cout<<getClearance()<<endl;
}

void Road::introduce(){
    cout<<getBrand()<<endl;
}

void Road::initElement(){
	Land::initElement();
	cout<<"������� �������� ��������: "<<endl;
	while (!(cin >> clearance)){
		cin.clear();
		while ( cin.get() != '\n' ) continue;
		cout << "������! ������� ����� �����: "<<endl;
	}
}

void Road::saveElement(char* fileName){
	Land::saveElement(fileName);
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"������ ������ �����"<<endl;
		fout.close();
	} else{
		fout<<"�������� ��������: "<<getClearance()<<endl;
		fout.close();
	}
}
