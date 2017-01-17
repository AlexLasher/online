#include "Rail.h"
#include <fstream>

Rail::Rail(){
    //ctor
}

Rail::Rail(string name,string pass,string wheel,string canvas){
    setBrand(name);
    setPassengers(pass);
    setWheels(wheel);
    setRailCanvasWidth(canvas);
}

Rail::~Rail(){
    //dtor
}

void Rail::setRailCanvasWidth(string val){
    railCanvasWidth=val;
}

string Rail::getRailCanvasWidth(){
    return railCanvasWidth;
}

void Rail::getParameters(){
    Land::getParameters();
    cout<<"������ ���������� �������: ";
    cout<<getRailCanvasWidth()<<endl;
}

void Rail::introduce(){
    cout<<getBrand()<<endl;
}

void Rail::initElement(){
	Land::initElement();
	cout<<"������� �������� ������ ���������� �������: "<<endl;
	while (!(cin >> railCanvasWidth)){
		cin.clear();
		while ( cin.get() != '\n' ) continue;
		cout << "������! ������� ����� �����: "<<endl;
	}
}

void Rail::saveElement(char* fileName){
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"\n������ ������ �����\n"<<endl;
		fout.close();
	} else{
		fout<<"�����"<<endl;
		fout<<getBrand()<<endl;
		fout<<getPassengers()<<endl;
		fout<<getWheels()<<endl;
		fout<<getRailCanvasWidth()<<endl;
		fout.close();
	}
}
