#include <iostream>
#include <cstring>
using namespace std;

int main(){

    // 2중 포인터의 동적할당 (2차원 배열)
    int **pp = nullptr;
    pp = new int*[3];

    for (int i=0; i<3; i++){
        pp[i]=new int[3];
        memset(pp[i],0,sizeof(int)*3);
    }

    // 값 추가
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            pp[i][j]=i*j;
        }
    }

    // 값 출력
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << pp[i][j] << ' ';
        }
        cout << '\n';
    }

    // 삭제
    for (int i=0; i<3; i++){
        delete[] pp[i];
    }
    delete[] pp;

    return 0;
}