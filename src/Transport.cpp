#include <iostream>
#include <fstream>
#include "Transport.h"

using namespace std;


    Transport::Transport(){

    }

    Transport::Transport(string s){
        setBrand(s);
    }

    Transport::~Transport()
    {
        //dtor
    }

    void Transport::setPassengers(string val){
        passengers=val;
    }

    string Transport::getPassengers(){
        return passengers;
    }

    void Transport::setBrand(string s){
        brand=s;
    }

    string Transport::getBrand(){
        return brand;
    }

    void Transport::getParameters(){
        introduce();
        cout<<"���������� ����������: ";
        cout<<getPassengers()<<endl;
    }

    void Transport::introduce(){
        cout<<getBrand()<<endl;
    }

    void Transport::initElement(){
    	cout<<"������� ���-�� ����������:"<<endl;
    	while (!(cin >> passengers)){
			cin.clear();
			while ( cin.get() != '\n' ) continue;
			cout << "������! ������� ����� �����: "<<endl;
    	}
    	cout<<"������� ��������:"<<endl;
		cin.ignore();
		getline(std::cin,brand);
    }
    void Transport::saveElement(char* fileName){
    	ofstream fout;
    	fout.open(fileName,ios::app);
    	if(fout.fail()){
    		cout<<"\n������ ������ �����\n"<<endl;
    		fout.close();
    	} else{
    		fout<<"���������"<<endl;
    		fout<<getBrand()<<endl;
    		fout<<getPassengers()<<endl;
    		fout.close();
    	}
    }
