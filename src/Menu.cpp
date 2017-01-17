/*
 * Menu.cpp
 *
 *  Created on: 3 ���. 2017 �.
 *      Author: Alex Lasher
 */
#include <iostream>
#include "Menu.h"
#include "MyList.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void Start(){
	int choice;
	bool exit=false;
	MyList lst;
	while(!exit){
		cout<<"\n�������� ����� ����:"<<endl;
		cout<<"1. ������� ����� ������"<<endl;
		cout<<"2. ����������� ���� ��������"<<endl;
		cout<<"3. ��������� ���� �������� � ����"<<endl;
		cout<<"4. ��������� ���� �������� �� �����"<<endl;
		cout<<"5. ����� ������� � ������"<<endl;
		cout<<"6. ������� ������� �� ������"<<endl;
		cout<<"0. ����� �� ���������"<<endl;
    	while (!(cin >> choice)){
			cin.clear();
			while ( cin.get() != '\n' ) continue;
			cout << "������! ������� ����� �����: "<<endl;
    	}
		switch(choice){
		case 1:
			CreateObj(lst);
			break;
		case 2:
			cout<<lst;
			break;
		case 3:
			cin.ignore();
			cout<<"������� �������� ������������� �����"<<endl;
			char* outFileName;
			outFileName=(char*)malloc(20*sizeof(char));
			gets(outFileName);
			SaveList(lst,outFileName);
			break;
		case 4:
			cin.ignore();
			cout<<"������� �������� ��������� �����"<<endl;
			char* inFileName;
			inFileName=(char*)malloc(20*sizeof(char));
			gets(inFileName);
			LoadList(lst,inFileName);
			break;
		case 5:
			FindElement(lst);
			break;
		case 6:
			DeleteElement(lst);
			break;
		case 0:
			exit=true;
			break;
		default: continue;
		}
	}
}

void CreateObj(MyList &lst){
	int choice;
	bool exit=false;
	Transport *tr;
	while(!exit){
	cout<<"\n�������� ����������� ������:"<<endl;
		cout<<"1. ����������"<<endl;
		cout<<"2. �����"<<endl;
		cout<<"3. �������"<<endl;
		cout<<"4. ��������� �����"<<endl;
		cout<<"0. ����� � ������� ����"<<endl;
    	while (!(cin >> choice)){
			cin.clear();
			while ( cin.get() != '\n' ) continue;
			cout << "������! ������� ����� �����: "<<endl;
    	}
		switch(choice){
		case 1:
			tr = new Road();
			tr->initElement();
			lst.push_back(tr);
			break;
		case 2:
			tr = new Rail();
			tr->initElement();
			lst.push_back(tr);
			break;
		case 3:
			tr = new Marine();
			tr->initElement();
			lst.push_back(tr);
			break;
		case 4:
			tr = new Submarine();
			tr->initElement();
			lst.push_back(tr);
			break;
		case 0:
			exit=true;
			break;
		default: continue;
		}
	}
}
