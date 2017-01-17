/*
 * Menu.cpp
 *
 *  Created on: 3 янв. 2017 г.
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
		cout<<"\nВыберите пункт меню:"<<endl;
		cout<<"1. Создать новый объект"<<endl;
		cout<<"2. Просмотреть лист объектов"<<endl;
		cout<<"3. Сохранить лист объектов в файл"<<endl;
		cout<<"4. Загрузить лист объектов из файла"<<endl;
		cout<<"5. Найти элемент в списке"<<endl;
		cout<<"6. Удалить элемент из списка"<<endl;
		cout<<"0. Выйти из программы"<<endl;
    	while (!(cin >> choice)){
			cin.clear();
			while ( cin.get() != '\n' ) continue;
			cout << "Ошибка! Введите целое число: "<<endl;
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
			cout<<"Введите название записываемого файла"<<endl;
			char* outFileName;
			outFileName=(char*)malloc(20*sizeof(char));
			gets(outFileName);
			SaveList(lst,outFileName);
			break;
		case 4:
			cin.ignore();
			cout<<"Введите название исходного файла"<<endl;
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
	cout<<"\nВыберите создаваемый объект:"<<endl;
		cout<<"1. Автомобиль"<<endl;
		cout<<"2. Поезд"<<endl;
		cout<<"3. Корабль"<<endl;
		cout<<"4. Подводная лодка"<<endl;
		cout<<"0. Выйти в главное меню"<<endl;
    	while (!(cin >> choice)){
			cin.clear();
			while ( cin.get() != '\n' ) continue;
			cout << "Ошибка! Введите целое число: "<<endl;
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
