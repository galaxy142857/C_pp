#include <iostream>
#include "human.h"
using namespace std;

int main(){
    // user defined type
    Human h;

    h.setAge(15);

    cout << h.getAge() << '\n';    // 함수로 출력
    h.show();
    //cout << h.age;    // age에 바로 접근 X
}