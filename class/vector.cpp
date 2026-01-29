#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;

    // write
    for (int i=0; i<10; i++){
        v.push_back(i);
    }

    // read
    for (int i=0; i<v.size(); i++){
        cout << v[i] << ' ';
    }
}