#include <iostream>
using namespace std;

int main(){
    int n=0;
    cin >> n;

    int *p=nullptr;
    p = new int[n];

    for(int i; i<n; i++)
        cin >> p[i];
    
    // string s;
    // getline(cin,s);


    int min=1000000;
    int max=-1000000;
    for (int i=0; i<n; i++){
        if (s[i]<min)
        min=s[i];
        if (s[i]>max)
        max=s[i];
    }

    cout << min << " " << max;
}

// int main(){
//     int a=0;
//     int b=0;
//     cin >> a >> b;
    
//     string s;
//     getline(cin, s);
    
//     for (int i=0; i<a; i++){
//         if (s[i]<b){
//             cout << s[i];
//         }
//     }
// }


// int main(){

//     int t=0;
//     cin >> t;

//     for (int i=0; i<t; i++){
//         string s;
//         cin >> s;
//         cout << s[0] << s[-1] << '\n';
//     }
//     return 0;
// }
