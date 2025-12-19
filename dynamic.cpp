// 동적 메모리 할당
// 오션코딩 https://oceancoding.blogspot.com/2022/12/c.html

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    // 정적 메모리 할당, static
    int a[10];

    // 동적 메모리 할당, dynamic allocation
    int size=5;
    int *p = new int[5];
    memset(p,0,sizeof(int)*size);
    int pos=0;

    while (1){
        cout << "Input Number(Exit:0):";
        int n;
        cin >> n;

        if (n==0){
            break;
        }
        
        if (pos>size-1){
            size*=2;
            int *pp = new int[size];  // 크기 조정
            memset(pp,0,sizeof(int)*size); // 쓰레기 값 들어감 - 수정
            
            for (int i=0; i<size; i++){
                pp[i]=p[i];
            }
                        
            delete[] p;
            p=pp;
        }

        p[pos]=n;
        pos++;
        
        for (int i=0; i<size; i++){
            cout << p[i] << ' ';
        }
        cout << '\n';

    }
    delete[] p;

    return 0;
}