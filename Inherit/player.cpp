#include "player.h"
#include <iostream>
using namespace std;

Player::Player(){
    cout << "constructor" << '\n';
}

Player::Player(string n, int a){

    cout << "constructor" << '\n';

    name=n;
    age=a;
}

Player::~Player(){

    cout << "destructor" << '\n';
}

void Player::show(){

    cout << "Name: " << name << ' ' << "Age: " << age << '\n';
}