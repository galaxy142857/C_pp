#include <iostream>
#include <cstring>
//using namespace std;

namespace SW{  // SW라는 이름으로 감싸줌 -> 포함 관계 SW::vector

template <typename T>
class vector {
    public:
    vector(){
        std::cout << "constructor" << '\n';
        p=nullptr;
        size=5;
        pos=0;

        p=new T[size];
        memset(p,0,sizeof(T)*size);
    }

    ~vector(){
        std::cout << "destructor" << '\n';
        if (p!=nullptr)
            delete[] p;
    }

    void show(){
        for (int i=0; i<size; i++){
            std::cout << p[i] <<  ' ';
        } std::cout << '\n';
    }

    void push_back(T v){
        if (pos>size-1){
            size*=2;
            T *np = new T[size];
            memset(np,0,sizeof(T)*size);

            for (int i=0; i<size/2; i++){
                np[i]=p[i];
            }
            delete[] p;
            p=np;
        }

        p[pos]=v;
        pos++;
    }

    private:
    T *p;
    int size;
    int pos;
};
}