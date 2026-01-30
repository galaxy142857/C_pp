#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;

    // 값 추가
    for (int i=0; i<10; i++){
        v.push_back(i);
    }

    // 값 삽입 - 삽입하는 (주소, 값)
    v.insert(v.begin(),-1);
    v.insert(v.end()-2,100);

    // 값 삭제 - 삭제하는 (주소)
    v.erase(v.end());

    // 값 출력
    for (int i=0; i<v.size(); i++){
        cout << v[i] << ' ';
    }

    return 0;
}