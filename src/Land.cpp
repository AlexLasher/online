#include "Land.h"
#include <fstream>

using namespace std;

Land::Land(){

}

Land::Land(string s){
    setBrand(s);
}

Land::~Land(){

}

void Land::setWheels(string val){
    wheels=val;
}

string Land::getWheels(){
    return wheels;
}

void Land::getParameters(){
    Transport::getParameters();
    cout<<"Количество колес: ";
    cout<<getWheels()<<endl;
}

void Land::introduce(){
    cout<<getBrand()<<endl;
}

void Land::initElement(){
	Transport::initElement();
	cout<<"Введите количество колес: "<<endl;
	while (!(cin >> wheels)){
		cin.clear();
		while ( cin.get() != '\n' ) continue;
		cout << "Ошибка! Введите целое число: "<<endl;
	}
}

void Land::saveElement(char* fileName){
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"\nОшибка чтения файла\n"<<endl;
		fout.close();
	} else{
		fout<<"Наземный транспорт"<<endl;
		fout<<getBrand()<<endl;
		fout<<getPassengers()<<endl;
		fout<<getWheels()<<endl;
		fout.close();
	}
}
