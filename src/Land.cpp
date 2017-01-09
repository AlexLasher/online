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

void Land::setWheels(int val){
    wheels=val;
}

int Land::getWheels(){
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
	Transport::saveElement(fileName);
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"Ошибка чтения файла"<<endl;
		fout.close();
	} else{

		fout<<"Количество колес: "<<getWheels()<<endl;
		fout.close();
	}
}
