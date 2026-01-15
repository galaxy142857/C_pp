// 2차원 배열 문제들 (2중 포인터)

#include <iostream>
using namespace std;

int main(){  // 2566
    int **pp=new int *[9];
    for (int i=0; i<9; i++){
        pp[i]=new int [9];

        for (int j=0; j<9, j++){
            cin >> pp[i][j];
        }
    }
}


// int main(){   // 2738

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