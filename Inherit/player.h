#include <string>

class Player{

    public:
        Player();
        Player(std::string, int);
        ~Player();

    protected:   // 상속에선 public , 외부에선 private
    //private:
        std::string name;
        int age;

    public:
        void show();
        // setter, getter
        void setName(std::string n){name=n;}
        void setAge(int a){age=a;}
        std::string getName(){return name;}
};