#include <iostream>
#include <cstring>
using namespace std;

int main(){

    // 포인터 변수 초기화 (아직 주소가 가리키는 곳 없음)
    int *p=nullptr;
    int size=5;

    p=new int[size];
    // 메모리 0으로 초기화
    memset(p,0,sizeof(int)*size);
    int pos=0;

    while (true){
        cout<<"Number(Exit=0):";
        int n=0;
        cin>>n;

        if (n==0) break;

        if (size<=pos){
            int *p2=new int [size*2];
            memset(p2,0,sizeof(int)*size*2);

            for (int i=0; i<size; i++)
                p2[i]=p[i];
            
            delete[] p;
            p=p2;
            size*=2;
        }

        p[pos]=n;
        pos++;

        for (int i=0; i<size; i++){
            cout << p[i] << ' ';
        }
        cout<<'\n';

    }

    delete[] p;
    return 0;
}