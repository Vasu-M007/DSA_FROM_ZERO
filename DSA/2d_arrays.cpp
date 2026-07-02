#include <iostream>
using namespace std;

// int main(){
//     int arr[3][4];
//     int n = 3;
//     int m=4;

//     for (int i=0; i<n;i++){
//         for (int j=0; j<m; j++){
//             cin >> arr[i][j];
//         }
//     }

//     for (int i=0; i<n;i++){
//         for (int j=0; j<m; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// void printarr(int arr[3][5], int n, int m){   
//     for (int i=0; i<n;i++){
//         for (int j=0; j<m; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
    
//spiral matrix printing

// void spiralmatrix(int arr[3][5], int n, int m){
//     int st_row = 0;
//     int st_col = 0;
//     int end_row = n-1;
//     int end_col = m-1;
    
//     while (st_row<=end_row && st_col<=end_col){  //for odd matrix

//         for (int j=st_col; j<=end_col; j++){ //top 
//             cout << arr[st_row][j] << " ";
//         }
//         for (int i = st_row+1; i<=end_row; i++){ //right
//             if (st_col == end_col){
//                 break;
//             }
//             cout << arr[i][end_col] << " ";
//         }
//         for (int j = end_col-1; j>=st_col; j--){
//             if (st_row==end_row){
//                 break;
//             }
//             cout << arr[end_row][j] << " ";
//         }
//         for (int i = end_row-1; i>=st_row+1; i--){ //left
//             cout << arr[i][st_col] << " ";
//         }
//         st_row++;
//         st_col++;
//         end_row--;
//         end_col--;
//     }
//     cout << endl;
// }

// int main(){
//     int arr[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
//     int n = 3; //rows
//     int m = 5; //cols
//     spiralmatrix(arr,n,m);
//     return 0;
// }

//diagonal sum

// void diagonalsum(int arr[4][4],int n,int m){
//     int sum=0;

//     for(int i=0; i<n;i++){
//         sum += arr[i][i];
//         sum += arr[i][n-i-1];
//         if (i == n - i -1){
//             sum -= arr[i][i];
//         }
//     }
//     cout << sum;
// }
// int main(){
//     int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int n = 4;
//     int m = 4;
//     diagonalsum(arr,n,m);
// }

//sorted 2d matrix key search using STAIRCASE SEARCH

// bool sorted2dsearch(int arr[4][4], int n, int m, int key){
//     int i = 0;
//     int j = m-1;

//     while (i < n && j >=0){
//         if (key == arr[i][j]){
//             cout << "found key at " << i << "," << j << endl;
//             return true;
//         } else if(key < arr[i][j]){
//             j--;
//         } else if(key > arr[i][j]){
//             i++;    
//         }
//      }
//      cout << "key not found";
//      return false;
//     }


// int main(){
//     int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
//     int n = 4;
//     int m = 4;
//     sorted2dsearch(arr,n,m,33);
// }

//row wise binary search

// int rowbinsearch(int arr[4][4], int n, int m, int key){

//     for (int i=0; i<n; i++){

//         int st = 0;
//         int end = m-1;

//         while (st <= end){
//             int mid = (st + end) / 2;
//             if (arr[i][mid] == key){
//                 return mid;
//             }
//             else if (key > arr[i][mid]){
//                 st = mid + 1;
//             } else {
//                 end = mid - 1;
//                 }
//             }
        
//     }
//     return -1;
// }

// int main(){
//     int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
//     int n = 4;
//     int m = 4;
//     cout << rowbinsearch(arr,n,m,999);
// }

// void func(int arr[][4],int n,int m){
//     cout << *(*(arr) + 2)<< endl;
// }

// int main(){
//     int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
//     int n = 4;
//     int m = 4;
//     func(arr,n,m);
// }

//assignment 2d array 
//q1

// void func(int arr[][3],int n, int m){
//     int count = 0;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             if (arr[i][j] == 7){
//                 count ++;
//             } 
//         }
//     }
//     cout << count << endl;
// }

// int main(){
//     int arr[2][3] = {{4,7,8},{8,8,7}};
//     int n = 4;
//     int m = 4;
//     func(arr,n,m);
//     return 0;
// }

//ques 2

// void func(int arr[][3],int n, int m){
//     int sum = 0;
//         for (int j=0; j<n; j++){
//             sum = sum + arr[1][j];
//         }
    
//     cout << sum << endl;
// }

// int main(){
//     int arr[3][3] = {{1,4,9},{11,4,3},{2,2,3}};
//     int n = 3;
//     int m = 3;
//     func(arr,n,m);
//     return 0;
// }

//assign q3

// void transpose_mat(int arr[][3], int rows, int cols){
//     int new_arr[cols][rows] = {{0}};
//     for (int i = 0; i<rows; i++){
//         for (int j=0; j<cols; j++){
//             new_arr[j][i] = arr[i][j];
//         }
//     }
//     for (int i = 0; i<cols; i++){
//         for (int j=0; j<rows; j++){
//             cout << new_arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int arr[2][3] = {{2,3,6},{8,9,7}};
//     int rows = 2;
//     int cols = 3;
//     transpose_mat(arr,rows,cols);
//     return 0;
// }









