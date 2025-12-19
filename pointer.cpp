// 포인터

#include <iostream>
using namespace std;

int main(){

    // 값을 담는 변수
    int a=5;

    // 포인터 변수 : 주소 담는 변수
    int *p=&a;

    cout << a << "addr:" << &a << '\n';
    cout << *p << "addr:" << p << '\n';
    return 0;
}