#include <iostream>
// #include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

//-------------factorial calculation-------------------

// long double factorial_func(int n){
//     if (n == 1 || n == 0){  //base case, the smallest problem 
//         return 1;
//     } else{
//         return n * factorial_func(n-1);
//     }
// }

// int main(){
//     cout << factorial_func(5);
//     return 0;
// }

//-----print decreasing order numbers------

// void decrease_func(int n){
//     if (n == 1){
//         cout << 1;
//     } else {
//         cout << n << ",";
//         decrease_func(n-1);
//     }
// }

// int main(){
//     decrease_func(100);
//     return 0;
// }

//---sum of n naturals---

// int n_naturals(int n){
//     if (n == 1){
//         return 1;
//     } else {
//         return n + n_naturals(n-1);
//     }
// }

// int main(){
//     cout << n_naturals(10);
//     return 0;
// }

//----------------n-th fibonacci---------------------

// int fib_number(int n){
//     if (n == 0 || n == 1){
//         return n;
//     } else{
//         return fib_number(n-1) + fib_number(n-2);
//     }
// }

// int main(){
//     cout << fib_number(1) << endl;
//     return 0;
// }

//----------------check if array in ascending order-----------------

// bool ascending_check(int arr[], int n, int i){
//     if (i == n-1){
//         return true;
//     }

//     if (arr[i] > arr[i+1]){
//         return false;
//     } 
//     return ascending_check(arr,n,i+1);
// }

// int main(){
//     int arr[] = {1,2,4,3,5};
//     int n = sizeof(arr) / sizeof(int);
//     cout << ascending_check(arr,n,0);
//     return 0;
// }

//----------------first occurence in a vec------------------

// int first_occurence(vector<int> vec, int size, int i,int target){
//     if (vec[i] == target){
//         return i;
//     }
//     else{
//         return first_occurence(vec, size, i-1, target);
//     }
// }

// int main(){
//     vector<int> vec = {1,2,3,3,4,3,6,88};
//     int x = vec.size();
//     cout << first_occurence(vec,x,x-1,3);
//     return 0;
// }

//-------------------x to the power n with ologn complexity------

// int power_calc(int x, int n){
//     if (n == 0){
//         return 1;
//     }

//     int halfpow = power_calc(x,n/2);
//     int square = halfpow * halfpow;

//     if(n % 2 == 0){
//         return square;
//     }
//     else{
//         return x * square;
//     }
// }


// int main(){
//     cout << power_calc(2,5);
// }

//--------------tiling problem----------------

// int tilingprob(int n){

//     if (n == 0 || n == 1){
//         return 1;
//     }

//     int ans1 = tilingprob(n-1);
//     int ans2 = tilingprob(n-2);

//     return ans1 + ans2;
// }

// int main(){
//     int n = 4;
//     cout << tilingprob(n);
//     return 0;
// }

//----------------display de-duplicated string--------

// void duplicate_count(string str, string ans, int i, int map[26]){
//     int n = str.size();
//     if (i == n){
//         cout << "ans is --" << ans << endl;
//     }
//     char ch = str[i];
//     int map_idx = (int)(ch - 'a');

//     if (map[map_idx] == true){
//         duplicate_count(str,ans,i+1,map);
//     } else{
//         map[map_idx] = true;
//         duplicate_count(str,ans+str[i], i+1, map);
//     }
// }

// int main(){

//     string str = "appnnacollege";
//     string ans = "";
//     int map[26] = {false};
//     duplicate_count(str,ans,0,map);

//     return 0;
// }

 
