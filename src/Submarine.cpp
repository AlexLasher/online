#include "Submarine.h"
#include <fstream>

Submarine::Submarine(){
    //ctor
}

Submarine::Submarine(string name, string pass, string disp, string immersion){
    setBrand(name);
    setPassengers(pass);
    setDisplacement(disp);
    setImmersionDepth(immersion);
}

Submarine::~Submarine(){
    //dtor
}

void Submarine::setImmersionDepth(string val){
    immersionDepth=val;
}

string Submarine::getImmersionDepth(){
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
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"\n������ ������ �����\n"<<endl;
		fout.close();
	} else{
		fout<<"��������"<<endl;
		fout<<getBrand()<<endl;
		fout<<getPassengers()<<endl;
		fout<<getDisplacement()<<endl;
		fout<<getImmersionDepth()<<endl;
		fout.close();
	}
}
