#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void fast_exponentiation(int x, int n){
    int ans = 1;
    while (n > 0){
        int lastbit = n & 1;
        if (lastbit !+)
        x = x * x;
        n = n >> 1;
    }
    cout << sum << endl;
}

int main(){
    fast_exponentiation(3,5);
    return 0;
}

//bit manipulation assign 1 ques

// void bit_range(int num, int i, int j){
//     int first_mask = (~0 << j+1);
//     int second_mask = (1 << i) - 1; //set last i bits
//     int bitmask = first_mask | second_mask;
//     num = num & bitmask;

//     cout << num << endl;
// }

// int main(){
//     bit_range(31,1,3);
//     return 0;
// }

//test

// void duplicate_checker(int nums[],int n){
//     int running = 0;
//     for (int i = 0; i < n; i++){
//         int curr = nums[i];
//         running = running ^ curr;
//         }
//         cout << running;
//     }

// int main(){
//     int nums[] = {4,1,2,1,2};
//     int n = sizeof(nums) / sizeof(int);
//     duplicate_checker(nums,n);
//     return 0;
// }

// void watering_plants(int plants[],int n, int cap){
//     int step_count = 0;
//     int cap_1 = cap;
//     for (int i=0; i<n; i++){
//         if (plants[i] <= cap_1){
//             int water_plant = cap_1 - plants[i];
//             step_count++;
//             cap_1 = water_plant;
//         } else {
//             step_count += 2*i + 1;
//             cap_1 = cap - plants[i];
//         }
//     cout << step_count << endl;
// }
// }

// int main(){
//     int plants[] = {1,1,1,4,2,3};
//     int n = sizeof(plants) / sizeof(int);
//     int capacity = 4;
//     watering_plants(plants,n,capacity);
//     return 0;
// }





