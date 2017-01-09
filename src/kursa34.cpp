#include <iostream>
#include <list>
#include <iterator>
#include <windows.h>
#include "Transport.h"
#include "Land.h"
#include "Sea.h"
#include "Marine.h"
#include "Submarine.h"
#include "Rail.h"
#include "Road.h"
#include "MyList.h"
#include <fstream>
#include "Menu.h"

using namespace std;

int main() {
	MyList myList;
    system("chcp 1251>NUL");
    Start();
/*    Transport *tr;
        tr = new Submarine();
        tr->initElement();
        myList.push_back(tr);
        tr = new Land();
        tr->initElement();
        myList.push_back(tr);
        tr = new Sea();
        tr->initElement();
        myList.push_back(tr);
        tr = new Road();
        tr->initElement();
        myList.push_back(tr);
        tr = new Rail();
        tr->initElement();
        myList.push_back(tr);
        tr = new Marine();
        tr->initElement();
        myList.push_back(tr);
        tr = new Submarine();
        tr->initElement();
        myList.push_back(tr);

        cout << myList;
        SaveList(myList,"Transport.txt");*/
	return 0;
}
