#include <iostream>
#include "player.h"
using namespace std;

Player::Player(){
    cout << "Constructor" << '\n';
    name="Lee";
    hp=0;
    p = nullptr;

    if (p==nullptr)
        p = new int[5];
}

Player::~Player(){
    if (p!=nullptr)
        delete[] p;
}

void Player::show(){
    cout << "Name" << name << '\n' << "HP: " << hp << '\n';
}