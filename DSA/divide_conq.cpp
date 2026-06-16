#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

//-------------merge sort------------------

// void merge(int arr[],int si,int ei,int mid){
//     vector<int> temp;
//     int i = si;
//     int j = mid+1;
//     while (i <= mid && j <= ei){
//         if (arr[i] <= arr[j]){
//             temp.push_back(arr[i]);
//             i++;
//         } else{
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }
//     while (i <= mid){
//         temp.push_back(arr[i++]);
//     }
//     while(j <= ei){
//         temp.push_back(arr[j++]);
//     }

//     for (int idx = si, x=0; idx <= ei; idx++){
//         arr[idx] = temp[x++];
//     }
// }

// void mergeSort(int arr[],int si, int ei){
//     if (si >= ei){
//         return;
//     }else{
//         int mid = si + (ei - si) / 2; // to prevent integer overflow occuring for large indexes  
//         mergeSort(arr,si,mid);
//         mergeSort(arr,mid+1,ei);

//         merge(arr,si,ei,mid);
//     }
// }

// void printarr(int arr[], int n){
//     for (int i=0; i<n; i++){
//         cout << arr[i] << " "<<endl;
//     }
// }

// int main(){
//     int arr[6] = {6,3,7,5,2,4};
//     int n = sizeof(arr) / sizeof(int);
//     mergeSort(arr,0,n-1);
//     printarr(arr,n);
//     return 0;
// }

//----------------quick sort-------------------

// int partiton(int arr[], int si, int ei){
//     int i = si-1;
//     int pivot = arr[ei];

//     for (int j = si; j<ei; j++){
//         if(arr[j] < pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     i++;
//     swap(arr[i],arr[ei]);

//     return i;
// }

// void quicksort(int arr[], int si, int ei){
//     if (si >= ei){
//         return;
//     }
//     int pivotidx = partiton(arr,si,ei);

//     quicksort(arr,si,pivotidx-1);
//     quicksort(arr,pivotidx+1,ei);

// }

// void printarr(int arr[],int n){
//     for (int i = 0;i<n; i++){
//         cout << arr[i] << " "<< endl;
//     }
// }

// int main(){
//     int arr[6] = {6,3,7,5,2,4};
//     int n = 6;
//     quicksort(arr,0,n-1);
//     printarr(arr,n);
//     return 0;
// }

//----------------search in rotated sorted arr-------------

// int search(int arr[], int si, int ei, int tar){
//     if (si > ei){
//         return -1;
//     }

//     int mid = si + (ei - si) / 2;
//     if (arr[mid] == tar){
//         return mid;
//     }
//     if (arr[si] < arr[mid]){
//         if (arr[si] <= tar && tar <= arr[mid]){
//             return search(arr,si,mid-1,tar);
//         } else{
//             return search(arr,mid+1,ei,tar);
//         }
//     } else{
//         if (arr[mid] < tar && tar <= arr[ei]){
//             return search(arr,mid+1,ei,tar);   
//         } else{
//             return search(arr,si,mid-1,tar);
//         }
//     }
// }


// int main(){
//     int arr[] = {4,5,6,7,8,9,10,11,12,0,1,2,3};
//     int n = 13;
//     cout << search(arr,0,n-1,10) << endl;
//     return 0;
// }

