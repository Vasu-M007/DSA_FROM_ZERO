#include <iostream>
#include <cmath>
using namespace std;

// int sum_sub_mul_div(int a, int b=1){ //default parameter = 1 if b not given //parameters
//     int sum = a + b; //first param cannot be defaulted
//     int sub = a - b;
//     return sum,sub;
// }

// int main(){
//     int sm = sum_sub_mul_div(2,3); //arguments
//     cout << sm << endl 
//     return 0;
// }


//odd or even number function
// bool odd_even(int a){
//     if (a % 2 == 0){
//         return true;
//     } else {
//         return false;
//     }
//     }

// int main(){
//     int z;
//     cout << "Enter the number to be checked : ";
//     cin >> z;
//     cout << odd_even(z) << endl;
//     return 0;
// }

//prime number check for n

// int prime(int n){
//     bool isPrime = true;
//     int i;
//     if ( n == 1){
//         isPrime = false;
//     } else {
//         for ( i = 2; i<n; i++){
//             if (n % i == 0){
//                 isPrime = false;
//             } 
//         }
//     }
//     if (isPrime){
//         return 1;
//     } else {
//         return 0;
//     }
// }

// int main(){
//     cout << prime(67) << endl;
//     return 0;
// }

//binomial coefficent

// int fac_calculation(int n){
//     int fact = 1;
//     int i;
//     if (n == 1 || n == 0){
//         return 1;
//     } else {
//         for (i = 1; i<=n ; i++){
//             fact = fact * i;
//         }
//     }
//     return fact;

// }

// int bino_coeff(int n, int r){
//     int coeff;
//     if (r == 0 || r == n){
//         return 1;
//     } else {
//         int fact_n = fac_calculation(n);
//         int fact_r = fac_calculation(r);
//         int fact_n_r = fac_calculation(n - r);     

//         coeff =  fact_n / (fact_r * fact_n_r);
//     }
//     return coeff;
// }

// int main(){
//     int n,r;
//     cout << "Enter n :";
//     cin >> n;
//     cout << "Enter r :";
//     cin >> r;

//     cout << "Binomial coeff of entered n and r is "<< bino_coeff(n,r)<<endl;
//     return 0;
// }

//palindrome or not

// bool palin(int n){
//     int i;
//     int count = 0;
//     int last_dig;
//     int lastdig2;
//     int temp = n;
//     int temp2 = n;
//     int sum = 0;
//     int base = 10;
//     int powered_mul;
//     bool isPalindrome = true;

//     while (n > 0){
//         last_dig = n % 10;
//         n = n / 10;
//         count = count + 1;
//     } for (i = (count - 1); i >= 0 ; i--){
//         lastdig2 = temp % 10;
//         powered_mul = lastdig2 * pow(base,i);
//         sum = sum + powered_mul;
//         temp = temp / 10;
//     }
//     if (temp2 != sum){
//         isPalindrome = false;
//     } 
//     return isPalindrome;
// }

// int main(){
//     int z;
//     cout << " enter the no : ";
//     cin >> z;
//     cout << palin(z) << endl;
//     return 0;
// }

//optimized palindrome

// int plaindrome_check(int n){
//     int temp = n;
//     int last_dig;
//     int reversed = 0;
//     while (n > 0){
//         last_dig = n % 10;
//         reversed = reversed * 10 + last_dig;
//         n = n/10;
//     } cout << "Reversed number is : "<< endl;
//     return (temp == reversed);
// }

// int main(){
//     int z;
//     cout << "enter number : ";
//     cin >> z;
//     cout << " Palindrome check (1 for yes 0 for no) : "<< plaindrome_check(z) << endl;
// }

//digit sum

// int digit_sum(int n){
//     int i;
//     int last_dig;
//     int sum;
//     while (n > 0){
//         last_dig = n % 10;
//         sum = sum + last_dig;
//         n = n / 10;
//     }
//     return sum;
// }

// int main(){
//     int z;
//     cout << "Enter the number : ";
//     cin >> z;
//     cout <<  " SUm of digits is : "<< digit_sum(z) << endl;
//     return 0;
// }

