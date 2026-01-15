#include <iostream>
using namespace std;

// 사용자가 정의한 타입 (int, string처럼 사용)
class Player{
    public:
    // 생성자 (리턴 타입 x)
    Player()  // __init__
    {
        cout << "Constructor" << '\n';
        name = "Lee";
        hp = 100;

        p=nullptr;
        p=new int[5];
    }
    // 소멸자 (클래스 없어질 때 호출, 주로 포인터 변수 삭제용)
    ~Player()  // 생략 가능한 함수
    {
        cout << "Destructor" << '\n';

        // memory leak safe (메모리 낭비 방지)
        if (p!=nullptr)
            delete[] p;
    }
    // 멤버 함수
    void show(){
        cout << "Name" << name << '\n' << "HP: " << hp << '\n';
    
        delete[] p;
        p=nullptr;
    }
    // 멤버 변수 (사용하는 변수 선언)
    private:
        string name;
        int hp;
        int *p;
};

int main(){

    Player p = Player();
    p.show();
    return 0;
}