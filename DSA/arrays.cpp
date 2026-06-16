#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
//value output from array 

// int main(){
//     int marks[5] = {1,2,3,4,5};
//     int len = sizeof(marks)/sizeof(int);

//     for (int indx=0; indx <= (len-1) ;indx++){
//         cout << marks[indx];
//     }

//     return 0;
// }

//val input to array

// int main(){
//     int arr[5];

//     int n = sizeof(arr) / sizeof(int);

//     for (int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for (int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//max of an array

// int main(){
//     int n;
//     int i;

//     cout << "Enter the element size of array";
//     cin >> n;

//     int arr[n];

//     for (i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     int max = arr[0];

//     for (i=0; i<n; i++){
//         if (arr[i] > max){
//             max = arr[i];
//         }
//     }
//     cout << "max of the array is" << max << endl;

//     return 0;
// }

//linear search

// int linsearch(int *arr, int n,int key){
//     for (int i=0; i<n; i++){
//         if (arr[i] == key){
//             return i;
//         }
//     }

//     return -1;
// }

// int main(){
//     int arr[] = {2,4,5,7,6,10,12};
//     int n = sizeof(arr)/ sizeof(int);

//     int key;
//     cout << "Enter the key you want to search for";
//     cin >> key;
//     cout << linsearch(arr,n,key) << endl;
// }

// void arrprint(int *arr, int n){
//     for (int i=0; i<n; i++){
//         cout << arr[i] << ",";
//     }
// }

// int main(){
//     int arr[] = {1,4,6,8,9};
//     int n = sizeof(arr)/sizeof(int);
    
//     int copyArr[n];

//     for(int i=0; i<n; i++){
//         int j = n-i-1;
//         copyArr[i] = arr[j];
//     }
//     for (int i=0; i<n; i++){
//         arr[i] = copyArr[i];
//     }

//     arrprint(arr,5);
    

//     return 0;
// }

//linear search with O(1) of time complexity

// void arrprint(int *arr, int n){
//     for (int k=0; k<n; k++){
//         cout << arr[k] << ",";
//     }
// }

// int main(){
//     int arr[] = {1,4,6,8,9};
//     int n = sizeof(arr)/sizeof(int);

//     int start = 0;
//     int end = n - 1;

//     while(start < end){
//         int c = arr[start];
//         arr[start] = arr[end];
//         arr[end] = c;

//         start ++;
//         end --;
//     }

//     arrprint(arr,5);
//     return 0;
// }

//Binary search

// int binsrch(int *arr, int n, int key){
//     int st = 0;
//     int end = n - 1;

//     while (st <= end){
//         int mid = (st + end) / 2;
//         if (arr[mid] == key){
//             return mid;
//         } else if(arr[mid] < key){
//             st = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }

//     return -1;
// }

// int main(){
//     int arr[] = {2,4,6,8,12,14,16};
//     int n = sizeof(arr)/sizeof(int);

//     cout << binsrch(arr,n,44);
//     return 0;
// }


//pointer arithmetic in arrays
 
// void arrcalc(int *arr, int n){
//     for (int i = 0; i<n; i++){
//         cout << *arr << endl;
//         arr = arr + 1;
//     }

// }
// int main(){

//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(int);
//     arrcalc(arr,5);
//     return 0;
// }  


// int main(){
//     int arr[20] = {1,2,3,4,5,6};
//     int *ptr1 = arr;
//     int *ptr2 = arr + 3;
//     cout << (ptr1 == arr) << endl;

//     return 0;
// }


// void subarrayprint(int *arr, int n){
//      for (int i=0; i<n;i++){
//         for (int j = i; j<n; j++){
//             for (int k = i; k<=j; k++){
//                 cout << arr[k];
//             }
//             cout << ",";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(int);
//     subarrayprint(arr,n);
//     return 0;
// }    

//max sub array sum

// void subarrayprint(int *arr, int n){
//     int maxSum = INT_MIN;
//     for (int i=0; i<n;i++){
//         for (int j = i; j<n; j++){
//             int sum = 0;
//             for (int k = i; k<=j; k++){
//                 sum = sum + arr[k];
//             }
//             maxSum = max(maxSum,sum);
//         }
//     }
//     cout << maxSum << endl;
// }
// int main(){
//     int arr[6] = {2,-3,6,-5,4,2};
//     int n = sizeof(arr) / sizeof(int);
//     subarrayprint(arr,n);
//     return 0;
// }    

//optimized subarray sum

// void subarraysum(int *arr, int n){
//     int maxsum = INT_MIN;
//     for (int i = 0; i<n; i++){
//         int sum = 0;
//         for (int j = i; j<n; j++){
//             sum = sum + arr[j];
//         }
//         maxsum = max(maxsum,sum);
//     }
//     cout << maxsum << endl;
// }

// int main(){
//     int arr[6] = {2,-3,6,-5,4,2};
//     int n = sizeof(arr) / sizeof(int);
//     subarraysum(arr,n);
//     return 0;
// }    

//kadanes algo

// void subarraysum(int *arr, int n){
//     int maxsum = INT_MIN;
//     int currSUM = 0;
//     for (int i = 0; i<n; i++){
//         currSUM += arr[i];
//         maxsum = max(currSUM, maxsum);
//         if (currSUM < 0){
//             currSUM = 0;
//         }
//     }
//     cout << maxsum << endl;
// }

// int main(){
//     int arr[6] = {2,-3,6,-5,4,2};
//     int n = sizeof(arr) / sizeof(int);
//     subarraysum(arr,n);
//     return 0;
// }    

// void buysellstock(int *arr, int n){
//     long int initial_best_buy = 1000000000000000;
//     int best_buy[10000];
//     best_buy[0] = INT_MAX;
//     for (int i=1; i<n; i++){
//         best_buy[i] = min(arr[i-1], best_buy[i-1]);
//         cout << best_buy[i] << ",";
//     }

//     int max_prof = 0;
//     int maxprofit = INT_MIN;
//     for (int i=0; i<n; i++){
//         int profit = arr[i] - best_buy[i];
//         maxprofit = max(maxprofit, profit);
//     }

//     cout << "Max profit is :" << maxprofit << endl;
// }

// int main(){
//     int arr[6] = {7,1,5,3,6,4};
//     int n = sizeof(arr) / sizeof(int);
//     buysellstock(arr,n);
//     return 0;
// }

//unoptimized logic

// void trapping_rainwater(int *arr, int n){
//     int water = 0;
//     for (int i=0; i<n; i++){
//         int left_boundary = arr[i];
//         for (int j = i+1; j<n; j++){
//             if (arr[j] >= left_boundary){
//                 for (int k = i + 1; k < j; k++){
//                     water += left_boundary - arr[k];
//                 }
//                 i = j-1;
//                 break;
//             }
//         }
//     }
//     cout << "water is :" << water << endl;
// }

// int main(){
//     int arr[] = {4,2,0,6,3,2,5};
//     int n = sizeof(arr) / sizeof(int);
//     trapping_rainwater(arr,n);
//     return 0;
// }

//class logic TRAPPING rainwater

// void trap(int *heights, int n){
//     int leftMax[1000];
//     int rightMax[1000];

//     leftMax[0] = heights[0];
//     rightMax[n-1] = heights[n-1];
//     for (int i=1; i<n; i++){
//         leftMax[i] = max(leftMax[i-1], heights[i-1]);
//     }
//     for (int i=n-2; i>=0; i--){
//         rightMax[i] = max(rightMax[i+1],heights[i+1]);
//     }

//     int watertrapped = 0;
//     for (int i = 0; i<n;i++){
//         int curr_water = min(leftMax[i],rightMax[i]) - heights[i];
//         if (curr_water > 0){
//             watertrapped = watertrapped + curr_water;
//         }
//     }
//     cout << watertrapped;
//     cout << endl;
// }

// int main(){
//     int arr[] = {4,2,0,6,3,2,5};
//     int n = sizeof(arr) / sizeof(int);
//     trap(arr,n);
//     return 0;
// }

//arrays assignment q1

// void repitition(int *nums, int n){
//     int count = 0;
//     int x;
//     for (int i=0; i<n; i++){
//         for (int j = i+1 ; j < n; j++){
//             if (nums[i] == nums[j]){
//                 count = count + 1;
//             } if (count >= 1){
//                 x = 1;
//             } else {
//                 x = 0;
//             }
//         }
//     }
//     cout << x << endl;
// }

// int main(){
//     int nums[] = {1,1,2,3,4};
//     int n = sizeof(nums) / sizeof(int);
//     repitition(nums,n);
//     return 0;
// }

// int pivotsearch(int *nums, int n, int target){
//     int st = 0;
//     int end = n - 1;

//     while (st <= end){
//         int mid = (st + end) / 2;

//         if (nums[mid] == target){
//             return mid;  

//         } if (nums[st] <= nums[mid]){
//             if (target >= nums[st] && target < nums[mid]){
//                 end = mid - 1;
//             } else {
//                 st = mid + 1;
//             }
//         } else {
//             if (target <= nums[end] && target > nums[mid]){
//                 st = mid + 1;
//             } else {
//                 end = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

// int main(){
//     int nums[] = {4,5,6,7,0,1,2};
//     int n = sizeof(nums) / sizeof(int);
//     cout << pivotsearch(nums,n,5) << endl;
//     return 0;
// }

// int binsrch(int *arr, int n, int key){
//     int st = 0;
//     int end = n - 1;
//     int ans = 0;

//     while (st <= end){
//         int mid = (st + end) / 2;
//         if (arr[mid] > 0){
//             ans = mid;
//             end = mid - 1;
//         } else{
//             st = mid + 1;
//         }
//     }

//     st = 0;
//     end = n -1;
//     int ans_negative = 0;

//     while (st <= end){
//         int mid_1 = (st + end) / 2;
//         if (arr[mid_1] >= 0){
//             ans_negative = mid_1;
//             end = mid_1 - 1;
//         }
//         else {
//             st = mid_1 + 1;
//         } 
//     }
//     int positives = n - ans;
//     int negatives = ans_negative;
//     cout << positives << endl;
//     cout << negatives << endl;
//     } 


// int main(){
//     int arr[] = {-3,-2,-1,0,0,1,2};
//     int n = sizeof(arr)/sizeof(int);
//     cout << binsrch(arr,n,44);
//     return 0;
// }

// void sort_colors(int nums[], int n){
//     int st = 0;
//     int end = n - 1;
//     while (st < end){
//         if (nums[st] > nums[end]){
//             swap(nums[st],nums[end]);
//             st++;
//         } else{
//             end--;
//         }
//     }
//     for (int i=0 ;i<n; i++){
//         cout << nums[i] << endl;
//     }
// }


// int main(){
//     int nums[] = {2,0,1};
//     int n = sizeof(nums) / sizeof(int);
//     sort_colors(nums,n);
//     return 0;
// }

//subarray

// void merge_two_arr(vector<int> arr1,vector<int> arr2,int n, int m){
//     for (int i=0; i<m; i++){
//         if (arr2[i] == 0){
//             continue;;
//         }
//         arr1.push_back(arr2[i]);
//     }
//     for (int i =0; i<(n+m); i++){
//         cout << arr1[i] << endl;
//     }
// }

// int main(){
//     vector<int> arr1 = {1,2,3,0,0,0};
//     vector<int> arr2 = {2,5,6};

//     int n = sizeof(arr1) / sizeof(int);
//     int m = sizeof(arr2) / sizeof(int);

//     merge_two_arr(arr1,arr2,n,m);

// }


bool containsDuplicate(vector<int>& nums,int k) {
    int n = nums.size();
    int count = 0;
    for (int i=0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if (nums[i] == nums[j] && abs(i - j) <= k){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,3,1,2,3};
    int k = 2;
    cout << containsDuplicate(nums,2);
    return 0;

}