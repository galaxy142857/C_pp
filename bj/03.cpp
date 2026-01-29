// vector 사용한 문제들

#include <iostream>
#include <vector>
using namespace std;

int main(){  //11720
    int n=0;
    cin >> n;

    string s;
    cin >> s;

    int cnt=0;

    for (int i=0; i<n; i++){
        cnt+=(s[i]-'0');
    }
    cout << cnt << '\n';

    // v.resize(100);
    // for (int i=0; i<n; i++){
    //     cin >> v[i];
    // }
}