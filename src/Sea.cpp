#include "Sea.h"
#include <fstream>

Sea::Sea(){

}

Sea::Sea(string s){
    setBrand(s);
}

Sea::~Sea(){

}

void Sea::setDisplacement(string vol){
    displacement=vol;
}

string Sea::getDisplacement(){
    return displacement;
}

void Sea::getParameters(){
    Transport::getParameters();
    cout<<"����� �������������: ";
    cout<<getDisplacement()<<endl;
}

void Sea::introduce(){
    cout<<getBrand()<<endl;
}

void Sea::initElement(){
	Transport::initElement();
	cout<<"������� �������� ������ �������������: "<<endl;
	while (!(cin >> displacement)){
		cin.clear();
		while ( cin.get() != '\n' ) continue;
		cout << "������! ������� ����� �����: "<<endl;
	}
}

void Sea::saveElement(char* fileName){
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"\n������ ������ �����\n"<<endl;
		fout.close();
	} else{
		fout<<"������� ���������"<<endl;
		fout<<getBrand()<<endl;
		fout<<getPassengers()<<endl;
		fout<<getDisplacement()<<endl;
		fout.close();
	}
}
