#include <iostream>
//#include "player.h"
#include "asian.h"
#include <vector>

using namespace std;

int main(){

    Asian p("Choi",12,"yellow");
    p.show();

    // Player p("Lee",65);
    // p.show();    
    // p.setName("yu");
    // p.setAge(16);
    // cout << p.getName() << '\n';
    // p.show();

    // Player 타입의 벡터 10개 방 생성
    vector<Player> v;
    Player p2[10];
    p2[0]=p;
    return 0;
}