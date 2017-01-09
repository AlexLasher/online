#include "Sea.h"
#include <fstream>

Sea::Sea(){

}

Sea::Sea(string s){
    setBrand(s);
}

Sea::~Sea(){

}

void Sea::setDisplacement(int vol){
    displacement=vol;
}

int Sea::getDisplacement(){
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
	Transport::saveElement(fileName);
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"������ ������ �����"<<endl;
		fout.close();
	} else{
		fout<<"����� �������������: "<<getDisplacement()<<endl;
		fout.close();
	}
}
