#include <iostream>
#include "human.h"
using namespace std;

Human::Human(){
    cout << "constructor" << '\n';
    age=0;
    name="Lee";
}

Human::~Human(){
    cout << "destructor" << '\n';
}

void Human::setAge(int a){
    if (a>=0 and a<150)
        age = a;
    else
        cout << "Error" << '\n';
}

void Human::show(){
    cout << age << ' ' << name << '\n';
}