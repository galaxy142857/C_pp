#include <iostream>
using namespace std;
#include "side.h"  // 프로젝트 안 파일 ""로 호출

// 함수 선언 - main 함수 뒤에 쓰일 함수 알려줌
int add(int, int);

int main(){

    cout<<add(3,2);
    cout<<multi(3,2);

    return 0;
}

// 함수 정의, 구현
int add(int a, int b){
    return a+b;
}