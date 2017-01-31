//
//  FirstController.cpp
//  FirstCPlusPlus
//
//  Created by Carter, Jackson on 1/23/17.
//  Copyright © 2017 Carter, Jackson. All rights reserved.
//

#include <IOSTREAM>
#include "FirstController.h"

using namespace std;
void FirstController :: start()
{
    cout<< "Spaget" <<endl;
    this->specialOutput();
}

void FirstController :: specialOutput()
{
    cout << "Hello u stinky code user" <<endl;
    int age;
    cin >> age;
    cout << "you typed in " << age << endl;
    cout << "Type in your name :D" << endl;
    string name;
    cin >> name;
    cout << "your name is " <<name<< " wow cool :O" << endl;
    cin.ignore();
    cin>> name;
    cout << name;
    cout << "Type your name and age" << endl;
    cin >> name >> age;
    cout << "you typed " << name << " and " << age << endl;
    cout << "type in your full name" << endl;
    cin.ignore();
    getline(cin, name);
    cout << name << endl;
    string saisstring;
    cin>> saisstring;
    cout <<"this is sai's string" << saisstring << endl;

    
}
