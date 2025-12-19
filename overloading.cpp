// 함수 오버로딩 (이름은 같지만 '전달인자'의 타입, 개수가 다르면 중복 가능)

#include <iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}

int main(){
    
    cout<<add(4,5)<<'\n';
    cout<<add(1.5,2.3)<<'\n';
    cout<<add(1,2,3)<<'\n';
    return 0;
}