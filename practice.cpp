// #include <iostream>
// using namespace std;

// int main(){
    
//     int n=0;
//     cin>>n;

//     if(n>=90 && n<=100){
//         cout<<'A';
//     }
//     else if (n>=80 && n<90)
//         cout<<'B';
//     else if (n>=70 && n<80)
//         cout<<'C';
//     else if (n>=60 && n<70)
//         cout<<'D';
//     else
//         cout<<'F';
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
    
//     int n=0;
//     cin>>n;

//     for (int i=1; i<10; i++)
//         cout<<n<<" * "<<i<<" = "<<n*i<<'\n';

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
    
//     int n=0;
//     cin>>n;
//     char c='*';

//     for (int i=1; i<=n; i++){
//         for (int j=n-i; j>0; j--){
//             cout<<' ';
//         }
//         for (int j=0; j<i; j++){
//             cout<<c;
//         }cout<<'\n';
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int main(){
    
    int n=0;
    cin>>n;

    int arr[100];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    int v=0;
    cin>>v;

    int cnt=0;
    for (int i=0; i<n; i++){
        if (arr[i]==v)
            cnt+=1;
    }
    cout<<cnt;

    return 0;
}