#include <iostream>
#include "vector.h"

using namespace std;
using namespace SW;  // using 통해 std나 SW 등 생략 가능하게 함

// 템플릿 함수
// 정의하면서 타입 정해짐 - T는 아직 정해지기 전
template <typename T>
T add (T a, T b){
    return a+b;
}

int main(){

    cout << add(1,2) << '\n';
    cout << add(1.5,3.4) << '\n';
    cout << add('0','1') << '\n';

    vector<int> v;
    for (int i=1; i<20; i++)
        v.push_back(i*i);
    
    v.show();

    return 0;
}