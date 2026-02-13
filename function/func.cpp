#include <iostream>
using namespace std;
#include "side.h"  // 프로젝트 안 파일 ""로 호출

// 함수 선언 - main 함수 뒤에 쓰일 함수 알려줌
int add(int, int);

// reference 타입(&), const(상수화)
// 변수 앞에 & 쓰면 변수를 복사하지 않고 같은 주소 사용 -> 메모리 절약
// const 쓰면 그 값은 변수가 아닌 상수가 됨, 함수 안에서 변경 불가능
void test(const int &a, const int &b){   // 전달인자에 const, & 사용
    int c = a*2;
    // a=c  -> a 값 변화 불가능
}

int main(){

    cout<<add(3,2);
    cout<<multi(3,2);

    return 0;
}

// 함수 정의, 구현
int add(int a, int b){
    return a+b;
}