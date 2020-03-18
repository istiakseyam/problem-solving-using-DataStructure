//
// Created by Istiak Ahmed Seyam on 18/3/20.
//

#include "studentInfo.h"
#include <iostream>

using namespace std;

student::student(){}
void student::value(int i, std::string n, float c) {
    id=i;
    name=n;
    cg=c;
}

void student::printInfo() {
    cout<<"Name : "<<name<<"  Id : "<<id<<"  CGPA : "<<cg<<endl;
}
bool student::operator== (student a) {
    if(a.id==id && a.name==name && a.cg==cg)
        return true;
        else
        return false;
}
bool student::operator!= (student a) {
    if(a.id!=id || a.name!=name || a.cg!=cg)
        return true;
    else
        return false;
}

int student::getId() const {
    return id;
}

const string &student::getName() const {
    return name;
}

float student::getCg() const {
    return cg;
}
