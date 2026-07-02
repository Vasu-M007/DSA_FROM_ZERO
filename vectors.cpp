#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

//how to create a 2d array using dynamic memory allocation

// int main(){
//     int rows = 4;
//     int cols = 3;
    
//     int* *matrix = new int*[rows];
//     for (int i=0; i<rows; i++){
//         matrix[i] = new int[cols];
//     }

//     int x = 1;
//     for (int i=0; i<rows; i++){
//         for (int j=0; j<cols; j++){
//             matrix[i][j] = x++;
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// vector<int> Set_mismatch(vector<int> arr, int n){
//     vector<int> storage(2);
//     vector<int> freq_vec(n+1,0);

//     for (int i=0; i<n;i++){
//         freq_vec[arr[i]]++;
//     }
//     int minimum_el_nums = *min_element(arr.begin(), arr.end());
//     int max_el_nums = *max_element(arr.begin(), arr.end());

//     cout << minimum_el_nums << endl;
//     cout << max_el_nums << endl;
//     }
//     // for (int i=0; i<n;i)
//     // if ((arr[i] < arr[i+1]) && (arr[i+1] < arr[i+2])){



// int main(){
//     vector<int> nums = {1,2,2,4};
//     int x = nums.size();
//     vector<int> ans = Set_mismatch(nums,x);
//     cout << ans[0] << " " << ans[1];
// }8,6,2,5,4,8,3,7

// int maxvol(int arr[], int n){
//     int st = 0;
//     int end = n-1;
//     int max_area = 0;
//         while (st < end){
//             int area = min(arr[st],arr[end]) * (end - st);
//             max_area = max(area,max_area);
//             if (arr[st] < arr[end]){
//                 st++;
//             } else{
//                 end--;
//             }
//         }
//         return max_area;
//     }

// int main(){
//     int arr[] = {1,8,6,2,5,4,8,3,7};
//     int n = sizeof(arr) / sizeof(int);
//     cout << maxvol(arr,n);
// }

// int max_count(int arr[],int n){
//     int count1 = 0;
//     int count2 = 0;
//     for (int i=0; i<n; i++){
//         if (arr[i] < 0){
//             count1++;
//         } else if(arr[i] > 0){
//             count2++;
//         }
//     }
//     int max_of_two = max(count1,count2);
//     return max_of_two;
// }

// int main(){
//     int arr[] = {-2,-1,-1,1,2,3};
//     int n = sizeof(arr) / sizeof(int);
//     cout << max_count(arr,n);
// }

// void three_sum(int arr[], int n){
//     int st = 0;
//     int end = n-1;
//     int two_sum = 0;
//     while (st < end){
//         for (int i = st+1; i<= end - 1; i++){
//             two_sum = arr[st] + arr[end];
//             if (two_sum + arr[i] = 0){
//                 return the triplet;
//                 end -- 
//             } else{
//                 st++;
//             }
//         }
//     }
// }

// int main(){
//     int arr[] = {-1,0,1,2,-1,-4};
//     int n = sizeof(arr) / sizeof(int);
// }

// void removeElement(int nums[],int n, int val) {
//     int k = 0;
//     int counter_arr[1];
//     int st=0;
//     int end=n-1;
//     while (st < end){
//         if (nums[st] != val && nums[end] != val){
//             nums[st] = nums[end];
//             nums[end] = nums[st];
//         }
//         else{
//             continue;
//         }
//         st++;
//         end--;
//     }
//     for (int i=0; i<n; i++){
//         cout << nums[i] << " ";
//     }
//     cout << endl;
// }

void removeElement(int nums[], int n){
    int st = 0;
    int end = 0;
    int max = 0;
    while (st <= end){
        if (st == end){
            end++;
        }  else if (st != end){
            
        }

        }
    }

int main(){
    int nums[] = {1,1,0,1,1,1};
    int n = sizeof(nums) / sizeof(int);
    removeElement(nums,n);
}