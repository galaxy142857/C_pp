#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v1(10);
    vector<int> v2(10);
    vector<int>::iterator itr = v1.begin();
    int i=0;

    // 반복자 (일종의 포인터)
    // vector의 주소로 반복문 제어
    for (itr=v1.begin(); itr<v1.end(); ++itr){
        *itr = i;
        i++;
    }

    i=0;
    // range base for문
    for (auto& vi :v2){   // python의 for i in lst:와 동일
        vi=i;
        i++;
    }

    for (auto itr=v1.begin(); itr!=v1.end(); itr++){
        cout << *itr << ' ';
    }
    cout << '\n';
    for (int i=0; i<v2.size(); i++){
        cout << v2[i] << ' ';
    }

    return 0;
}