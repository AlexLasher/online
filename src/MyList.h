#ifndef MYLIST_H_INCLUDED
#define MYLIST_H_INCLUDED
#include "Transport.h"
#include <list>
#include <iterator>

using namespace std;


typedef list <Transport*> MyList;
typedef MyList :: iterator MyIterator;

void PrintList(MyList);

ostream & operator << (ostream & ,MyList);

void SaveList(MyList,char*);

MyList LoadList(MyList, char*);

MyList DeleteElement(MyList,unsigned int);

MyList DeleteElement(MyList);

void FindElement(MyList lst);

#endif // MYLIST_H_INCLUDED
