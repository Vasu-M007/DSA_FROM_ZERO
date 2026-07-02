#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

//1d to 2d array

// void oned_twod_arr(int arr[], int size, int n, int m){
//     int st = 0;
//     int end = n-1;
//     int twod_arr[m][n] = {{0}};
//     if (m*n != size){
//         cout << "wrong size change m and n" << endl;
//     }
//     for (int i=0; i<m; i++){
//         st = (i) * n;
//         end = (i+1)*n - 1;
//         int j=0;
//         for(int idx=st; idx<=end; idx++){
//             twod_arr[i][j] = arr[idx];
//             j++;
//             } 
//         }

//     for (int i=0; i<m;i++){
//         for (int j=0; j<n; j++){
//             cout << twod_arr[i][j] << " "; 
//         }
//         cout << endl;
//     }
// } 

// int main(){
//     int arr[] = {1,2,3};
//     int m = 3; //rows
//     int n = 1; //cols
//     int size = sizeof(arr)/sizeof(int);
//     oned_twod_arr(arr, size,n,m);
//     return 0;
// }

//rot image clockwise

void transpose_mat(int arr[][3], int rows, int cols){
    int new_arr[cols][rows] = {{0}};
    for (int i = 0; i<rows; i++){
        for (int j=0; j<cols; j++){
            new_arr[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout << new_arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int k = 0; k<rows; k++){
        int i = 0;
        int j = cols - 1;
        while (i<j){ 
            swap(new_arr[k][i],new_arr[k][j]);
            i++;
            j--;
    }
    }
    for (int i = 0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout << new_arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;
    transpose_mat(arr,rows,cols);
    return 0;
}
