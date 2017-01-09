#include "MyList.h"
#include "Transport.h"

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

void DeleteElement(MyList lst,unsigned int n){
	MyIterator pos = lst.begin();
	if(n<=lst.size()){
		for(unsigned int i=1;i!=n;i++)pos++;
	} else{
		cout<<"В списке нет столько элементов"<<endl;
	}
	lst.erase(pos);
}

void DeleteElement(MyList lst,string name){
    MyIterator pos = lst.begin();
    Transport* tr;
    while ((pos!=lst.end())){
            tr = (*pos);
            if (name == tr->getBrand()) break;
            pos++;
    }
}
