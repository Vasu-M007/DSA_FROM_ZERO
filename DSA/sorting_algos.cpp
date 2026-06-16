#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

//bubble sort

// void print(int *arr,int n){
//     for (int i=0;i<n;i++){
//         cout << arr[i] << endl;
//     }
//     cout << endl;
// }

// void bubble_sort (int *arr, int n){
//     for (int i=0; i<n-1; i++){
//         for (int j=0; j< n-i-1; j++){
//             if (arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);      
//             }
//         }
//     }
//     print(arr,n);
// }

// int main(){
//     int arr[] = {5,4,1,3,2};
//     int n = sizeof(arr) / sizeof(int);
//     bubble_sort(arr,n);
// }

//selection sort

// void prinntarr(int *arr, int n){
//     for (int i=0; i<n;i++){
//         cout << arr[i] << endl;
//     }
//     cout << endl;
// }
// void selection_sort(int *arr, int n){
//     int temp;
//     int j;
//     for (int i=0; i<n-1; i++){
//         int minidx = i;
//         for (j = i+1; j<n; j++){
//             if (arr[j] < arr[minidx]){
//                 swap(arr[j],arr[minidx]);      
//             }
//         }
//     }
// }

// int main(){
//     int arr[] = {5,4,1,3,2};
//     int n = sizeof(arr) / sizeof(int);
//     selection_sort(arr,n);
//     prinntarr(arr,n);
// }

//insertion sort

// void prinntarr(int *arr, int n){
//     for (int i=0; i<n;i++){
//         cout << arr[i] << endl;
//     }
//     cout << endl;
// }

// void insertionsort(int *arr, int n){
//     for(int i=1; i<n;i++){
//         int prev = i - 1;
//         int curr = arr[i];
//         while (prev >=0 && arr[prev] > curr){
//             swap(arr[prev], arr[prev+1]);
//             prev--;
//         }
//     }  
// }

// int main(){
//     int arr[] = {5,4,1,3,2,67,8,9,33432,5784};
//     int n = sizeof(arr) / sizeof(int);
//     insertionsort(arr,n);
//     prinntarr(arr,n);
// }

// counting sort

// void printarr(int *arr, int n){
//     for (int i=0; i<n; i++){
//         cout << arr[i] << endl;
//     }
// }

// void countsort(int *arr, int n){
//     int freq[1000] = {0};
//     int minVal = INT_MAX;
//     int maxVal = INT_MIN;

//     for (int i=0; i<n; i++){
//         minVal = min(minVal,arr[i]);
//         maxVal = max(maxVal,arr[i]);
//     }

//     for (int i=0; i<n; i++){
//         freq[arr[i]]++;
//     }

//     for (int i=minVal, j=0; i<=maxVal; i++){
//         while (freq[i] > 0){
//             arr[j++] = i;
//             freq[i]--;
//         }
//     }
//     printarr(arr,n);
// }

// int main(){
//     int arr[] = {1,4,1,3,2,4,3,7};
//     int n = sizeof(arr) / sizeof(int);
//     countsort(arr,n);
// }

//inbuilt sort


// void printarr(int *arr, int n){
//     for (int i=0; i<n; i++){
//         cout << arr[i] << endl;
//     }
// }

// int main(){
//     int arr[8] = {1,3,5,7,9,89,0,999};
//     int n = sizeof(arr) / sizeof(int);
//     sort(arr+1,arr+8); //ascending order sort
//     sort(arr+1,arr+8,greater<int>()); // descending order
//     printarr(arr,n);
// }

//character sort in desc order

// void printarr(char *arr, int n){
//     for (int i=0; i<n; i++){
//         cout << arr[i] << endl;
//     }
// }

// void insertsort(char arr[],int n){
//     for (int i=1; i<n; i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev >= 0 && arr[prev]>curr){
//             swap(arr[prev],arr[prev+1]);
//             prev--;
//         }
//     }
// }

// int main(){
//     char arr[5] = {'a','b','c','d','e'};
//     int n = sizeof(arr) / sizeof(char);
//     insertsort(arr,n);
//     printarr(arr,n);
//     return 0;
// }






