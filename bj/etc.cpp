#include <set>
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    long long n;
    int b;
    cin >> n >> b;

    string x;
    int q,r;
    while (b<=n){
        q=n/b;
        r=n%b;

        n=q;
        if (r<10)
            x.insert(x.begin(),r+'0');
        else
            x.insert(x.begin(),r+'A'-10);
    }
    if (n<10)
        x.insert(x.begin(),n+'0');
    else
        x.insert(x.begin(),n+'A'-10);
    cout << x;

    return 0;
}

// int main(){  // 2745

//     string n;
//     int b;
//     cin >> n >> b;

//     long long cnt=0;   // overflow 방지
//     int k=0;
//     for (int i=0; i<n.length(); i++){
//         if (n[i]>'@')
//             k = n[i]-'7';
//         else
//             k = n[i]-'0';

//         cnt += k*pow(b,(n.length()-i-1));
//     }
//     cout << cnt;

//     return 0;
// }



// int main(){
    
//     set<int> s;
    
//     for (int i=0; i<10; i++){
//         int a=0;
//         cin >> a;
        
//         s.insert(a%42);
//     }

//     cout << s.size();

//     // for (set<int>::iterator itr=s.begin(); itr!=s.end(); ++itr){
//     //     cout << *itr << '\n';
//     // }

//     return 0;
// }