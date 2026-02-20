// bj 약수, 배수와 소수 2
#include <iostream>
using namespace std;

long long gcd(int a, int b){
    long long x=a%b;
    if (x==0)
        return b;
    else
        return gcd(b,x);
}

int main(){  // 1735

    long long a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;

    long long x,y;
    x=a*d+b*c;
    y=b*d;

    if (x>=y){
        x=x/gcd(x,y);
        y=y/gcd(x,y);
    }
    else{
        x=x/gcd(y,x);
        y=y/gcd(y,x);
    }
    cout << x << ' ' << y;

    return 0;
}

// int main(){  // 1934, 13241


//     long long int m,n;
//     cin >> m >> n;

//     long long int a,b;
//     a=max(m,n);
//     b=min(m,n);

//     long long int x=1;
//     while (x>0){
//         x=a%b;
//         a=b;
//         b=x;
//         }
//     cout << m*n/a << '\n';

//     return 0;
// }