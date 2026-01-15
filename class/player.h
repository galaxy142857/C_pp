#include <iostream>
#include <string>

class Player{
    
    // 함수의 선언만 진행
    public:    
        Player();
        ~Player();  // 생략 가능

        void show();

    private:
        std::string name;
        int hp;
        int *p;
};