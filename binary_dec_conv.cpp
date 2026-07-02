#include <iostream>
using namespace std;
#include <cmath>

//binary to decimal

// void BintoDec( int binnum ){
//     int power = 0;
//     int n = binnum;
//     int sum = 0;

//     while(n>0){
//         int lastdig = n % 10;
//         int sum1 = lastdig * pow(2,power);
//         power = power + 1;
//         n = n/10;
//         sum = sum1 + sum;
//     }

//     cout << sum << endl;
// }

// int main(){
//     BintoDec(101);
//     return 0;
// }

//dec to binary 

// void divider(int decnum){
//     int power = 1;
//     int n = decnum;
//     int sum = 0;
//     int bin_num;
//     int actual_no;

//     while (n>0){
//          int remainder = n % 2;
//          bin_num = remainder * power;
//          power = power * 10;
//          n = n/2;
//          sum = sum + bin_num;
//     }
//     cout << sum << endl;
// }

// int main(){
//     int num;
//     cout << " Enter decimal number : ";
//     cin >> num;

//     divider(num);
//     return 0;
// }

