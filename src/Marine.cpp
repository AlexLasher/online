#include "Marine.h"
#include <fstream>

Marine::Marine()
{
    //ctor
}

Marine::Marine(string name, string pass, string disp, string deck){
    setBrand(name);
    setPassengers(pass);
    setDisplacement(disp);
    setDeckSqare(deck);
}

Marine::~Marine()
{
    //dtor
}

void Marine::setDeckSqare(string val){
    deckSqare=val;
}

string Marine::getDeckSqare(){
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
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"\n������ ������ �����\n"<<endl;
		fout.close();
	} else{
		fout<<"�������"<<endl;
		fout<<getBrand()<<endl;
		fout<<getPassengers()<<endl;
		fout<<getDisplacement()<<endl;
		fout<<getDeckSqare()<<endl;
		fout.close();
	}
}
