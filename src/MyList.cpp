#include "MyList.h"
#include "Transport.h"
#include "Road.h"
#include "Rail.h"
#include "Marine.h"
#include "Submarine.h"
#include <fstream>

void PrintList(MyList lst){
    MyIterator pos; Transport *p;
    pos = lst.begin();
    while (pos!=lst.end())
    {
        p = (*pos);
        p->getParameters();
        cout<<"-----------------------"<<endl;
        pos++;
    }
}

ostream & operator << (ostream & out, MyList lst){
    PrintList(lst);
    return out;
}

void SaveList(MyList lst, char* fileName){
	MyIterator pos; Transport *p;
	pos = lst.begin();
	while (pos!=lst.end())
	{
		p = (*pos);
		p->saveElement(fileName);
		pos++;
	}
}

void LoadList(MyList &lst, char* fileName){
	string type, name, firstParam, secParam, thirdParam;
	MyIterator pos; Transport *tr;
	ifstream fin(fileName);
	if(!fin.is_open()){
		cout<<"������ ������ ����� �������� �����"<<endl;
		fin.close();
	} else{
		while(!fin.eof()){
			getline(fin,type);
			getline(fin,name);
			getline(fin,firstParam);
			getline(fin,secParam);
			getline(fin,thirdParam);
			if(type=="����������"){
				tr = new Road(name, firstParam, secParam, thirdParam);
				lst.push_back(tr);
			}else if(type=="�����"){
				tr = new Rail(name, firstParam, secParam, thirdParam);
				lst.push_back(tr);
			}else if(type=="�������"){
				tr = new Marine(name, firstParam, secParam, thirdParam);
				lst.push_back(tr);
			}else if(type=="��������"){
				tr = new Submarine(name, firstParam, secParam, thirdParam);
				lst.push_back(tr);
			}
		}
		fin.close();
	}
}

MyList DeleteElement(MyList lst,unsigned int n){
	MyIterator pos = lst.begin();
	if(n<=lst.size()){
		for(unsigned int i=1;i!=n;i++)pos++;
	} else{
		cout<<"� ������ ��� ������� ���������"<<endl;
	}
	lst.erase(pos);
	return lst;
}

void DeleteElement(MyList& lst){
    MyIterator pos = lst.begin();
    Transport* tr;
	string elementName;
	cout<<"������� ��� ���������� �������"<<endl;
	cin.ignore();
	getline(cin,elementName);
    while ((pos!=lst.end())){
            tr = (*pos);
            if (elementName == tr->getBrand()) break;
            pos++;
    }
    if(pos==lst.end()){
    	cout<<"��������� ������ �� ������ � ������"<<endl;
    } else {
        lst.erase(pos);
        cout<<"������� "<< elementName << " ������"<<endl;
    }
}
void FindElement(MyList lst){
	MyIterator pos = lst.begin();
	Transport* tr;
	string elementName;
	cout<<"������� ��� �������� �������"<<endl;
	cin.ignore();
	getline(cin,elementName);
	while ((pos!=lst.end())){
	            tr = (*pos);
	            if (elementName == tr->getBrand()) break;
	            pos++;
	    }
	    if(pos==lst.end()){
	    	cout<<"��������� ������ �� ������ � ������"<<endl;
	    } else {
	        tr->getParameters();
	    }
}
