#include "Rail.h"
#include <fstream>

Rail::Rail(){
    //ctor
}

Rail::Rail(string s){
    setBrand(s);
}

Rail::~Rail(){
    //dtor
}

void Rail::setRailCanvasWidth(int val){
    railCanvasWidth=val;
}

int Rail::getRailCanvasWidth(){
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
	Land::saveElement(fileName);
	ofstream fout(fileName,ios::app);
	if(fout.fail()){
		cout<<"������ ������ �����"<<endl;
		fout.close();
	} else{
		fout<<"������ ���������� �������: "<<getRailCanvasWidth()<<endl;
		fout.close();
	}
}
