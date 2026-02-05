#include <string>

class Human {

    public:
        Human();
        ~Human();

        // 외부에서 함수를 통해 간접적 조작
        void setAge(int a);
        int getAge() {return age;}  // inline 함수 (한 줄로만 구성)
        void show();

    private:   // 외부에서 직접적 조작 X
        int age;
        std::string name;

};