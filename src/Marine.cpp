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
    cout<<"������� ������: ";
    cout<<getDeckSqare()<<endl;
}

void Marine::introduce(){
    cout<<getBrand()<<endl;
}

void Marine::initElement(){
	Sea::initElement();
	cout<<"������� �������� ������� ������: "<<endl;
	while (!(cin >> deckSqare)){
		cin.clear();
		while ( cin.get() != '\n' ) continue;
		cout << "������! ������� ����� �����: "<<endl;
	}
}

void Marine::saveElement(char* fileName){
	Sea::saveElement(fileName);
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"������ ������ �����"<<endl;
		fout.close();
	} else{
		fout<<"������� ������: "<<getDeckSqare()<<endl;
		fout.close();
	}
}
