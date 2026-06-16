#include <iostream>
#include <cmath>

using namespace std;

/* 1 1 1 1 
2 2 2 2 
3 3 3 3
4 4 4 4 pattern */

// int main(){
//     int i;
//     int j;
//     for (i=1; i<=4; i++){
//         for (j=1; j<=4; j++){
//             cout << i << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

/*  *
    **
    ***
    ****... */

//inverted star

// int main(){
//     int N;
//     int i;
//     int j;
//     cout << "Enter N";
//     cin >> N;

//     for (i = 1; i<=N; i++){
//         for (j = (N - i + 1); j>=1; j--){
//             cout << "* ";
//         }
//         cout << "\n";

//     }

// }

//half pyramid


//hollow rectangle 1st approach(me)
// int main(){
//     int rows;
//     int i;
//     int j;
//     cout << "Enter rows : ";
//     cin >> rows;

//     for (i=1; i<=rows; i++){
//         for (j = 1; j<=5; j++){
//             if (i != 1 && i != rows){
//                 if (j == 2 || j == 3 || j == 4){
//                     cout << "  ";
//                     continue;
//                 };
//             }
//             cout << "* ";
//         }
//         cout << "\n";
//     }
// }

//shraddha approach

// int main() {
//     int rows;
//     int i, j;
//     cout << "Enter rows : ";
//     cin >> rows;

//     for (i = 1; i <= rows; i++) {
//         cout << "* ";                     

//         for (j = 1; j <= (rows - 2); j++) {
//             if (i == 1 || i == rows) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }

//         cout << "* ";  
//         cout << "\n";
//     }

//     return 0;
// }

//inverted half-pyramid(my approach)

// int main(){
//     int N;
//     int i,j,k;
//     cout << "Enter rows : ";
//     cin >> N;

//     for ( i = 1; i <= N; i++){
//         for (j = 1; j<=(N - i); j++){
//             cout << " ";
//         } for ( k = 1; k <= i; k++ ){
//             cout << "*";
//         }
//         cout << endl;        
//     }
//     return 0;
// }

//floyds triangle

// int main(){
//     int N;
//     int i,j;
//     cout << "Enter N : ";
//     cin >> N;
//     int num = 1;

//     for (i = 1; i<=N; i++){
//         for (j = 1; j<=i; j++){
//             cout << " " << num++;
//         }
//         cout << endl;
//     }
// }

//arrow pattern

// int main(){
//     int rows = 4;
//     int i,j,k,f;
//     for (i=1; i<=rows; i++){
//         for (j = 1; j<=i; j++){
//             cout << "*";
//         } 
//         cout << endl;   
//     }
//     for (k = 1; k<=rows; k++){
//         for (f = (rows-k+1); f>=1; f--){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//diamond pattern

// int main(){                     //1,2,3,4,5,6,7
//     int rows = 4;
//     int tot_spaces = 7;
//     int i,j,k;
//     for (i=1; i<=rows; i++){
//         for (j=1; j<= rows-i; j++){
//             cout << "  ";                      //pyramid print
//         } for (k=1; k<=(2*i - 1); k++){
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     int N=4;
//     int spaces = 7;
//     // int i,j,k;
//     for (i=N; i>=1; i--){
//         for (j=1; j<=(N-i);j++){
//             cout << "  ";
//         } for (k=1; k<=(2*i-1);k++){               //inverted pyramid print
//             cout << "* ";
//         }
//         cout << endl;
//     } 
//     return 0;
// }

//butterfly pattern

int main(){
    int N = 4;
    int i,j,k;

    for (i=1; i<=N; i++){
        for (j=1; j<=i; j++){
            cout << "* ";
        }  for (k=1; k<=2*(N-i); k++){    //upper half
            cout << "  ";
        } for (j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    } 
        for (i=N; i>=1; i--){
            for (j=1; j<=i; j++){
                cout << "* ";
        } for (k=1; k<=2*(N-i); k++){
            cout << "  ";
        } for (j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;

    }

     return 0;
}

