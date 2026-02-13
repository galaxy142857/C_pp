// vector 사용한 문제들

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){

    return 0;
}

// int main(){   // 1152

//     //vector<string> v;
//     string s;
//     getline(cin,s,'\n');  // '\n'까지 한 줄 통으로 받음

//     if (s==" "){
//         cout << 0;
//         return 0;
//     }

//     int idx=1;
//     int a=0;
//     int i=0;
//     while (true){
    
//         a=s.find(' ', idx);
//         if (a>=s.size()-1)
//             break;
//         i++;
//         idx=a+1;
//     }
//     cout << i+1;

//     return 0;
// }


// int main(){   // 2675

//     int t=0;
//     cin >> t;

//     for (int i=0; i<t; i++){
//         int n=0;
//         string s;
//         cin >> n >> s;

//         for (int j=0; j<s.size(); j++){
//             for (int _=0; _<n; _++)
//                 cout << s[j];
//         }
//         cout << '\n';
//     }
//     return 0;
// }


// int main(){   //10809

//     vector<int> v(26,-1);

//     string s;
//     cin >> s;

//     for (int i=0; i<s.size(); i++){
//         if (v[s[i]-'a']==-1)
//             v[s[i]-'a']=i;
//     }

//     for (int i=0; i<26; i++)
//         cout << v[i] << ' ';

//     return 0;
// }


// int main(){  //11720
//     int n=0;
//     cin >> n;

//     string s;
//     cin >> s;

//     int cnt=0;

//     for (int i=0; i<n; i++){
//         cnt+=(s[i]-'0');
//     }
//     cout << cnt << '\n';

//     // v.resize(100);
//     // for (int i=0; i<n; i++){
//     //     cin >> v[i];
//     // }
// }