// 2차원 배열 문제들 (2중 포인터, vector - 템플릿)

#include <iostream>
#include <vector>
using namespace std;

int main(){  //10798
    
    // vector<int> v (15);
    // string s;
    // cin >> s;

    string s[5];


    // int **pp = new int *[5];
    // for (int i=0; i<5; i++){
    //     pp[i] = new int [15];

    //     for (int j=0; j<15; j++){
    //         cin >> pp[i][j];
    //     }
    // }
    // cout << pp;
}




// int main(){  // 2566  end
//     int max = 0;
//     int mi=1, mj=1;
//     int **pp=new int *[9];
//     for (int i=0; i<9; i++){
//         pp[i]=new int [9];

//         for (int j=0; j<9; j++){
//             cin >> pp[i][j];
//             if (max < pp[i][j]){
//                 max = pp[i][j];
//                 mi = i+1;
//                 mj = j+1;
//             }
//         }
//     }
//     cout << max << '\n' << mi << ' ' << mj;
// }


// int main(){   // 2738 end

//     int n, m;
//     cin >> n >> m;

//     int **pp = new int *[n*2];
//     for (int i=0; i<n*2; i++){
//         pp[i] = new int [m];

//         for (int j=0; j<m; j++){
//             cin >> pp[i][j];  // 공백 기준으로 떼어내므로 하나씩 입력 받기 가능
//         }
//     }

//     for (int i=0; i<n; i++){
//         for (int j=0; j<m; j++){
//             cout << pp[i][j]+pp[i+n][j] << ' ';
//         } cout << '\n';
//     }

//     for (int i=0; i<n*2; i++)
//         delete[] pp[i];
//     delete[] pp;

//     return 0;
// }