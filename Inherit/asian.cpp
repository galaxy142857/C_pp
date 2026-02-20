#include "asian.h"
#include <iostream>
using namespace std;

// ':' 뒤는 초기화 리스트
Asian::Asian(string n, int a, string c) : Player(n,a){
    cout << "asian constructor" << '\n';
    skin_color=c;

}

Asian::~Asian(){
    cout << "asian destructor" << '\n';
}

void Asian::show(){

    cout << "Name: " << name << ' ' << "Age: " << age << ' ' <<"Color: "<< skin_color << '\n';
}