#include <iostream>
#include <climits>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

// void uppercase_conv(char arr[],int n){
//     for (int i=0; i<n; i++){
//         if (65 < arr[i] && arr[i] < 90){
//             continue;
//         } else if(97 < arr[i] && arr[i] < 122){
//             arr[i] = arr[i] - 32;
//         }
//     }
//     cout << arr << endl;
// }

// int main(){
//     char arr[] = "ApPle";
//     uppercase_conv(arr, strlen(arr));
//     return 0;
// }

// void printarr(char arr[], int n){
//     for (int i=0; i<=n; i++){
//         cout << arr[i] << endl;
//     }
// }

// void revchararr(char arr[], int n){
//     int i = 0;
//     int j = n-1;
//     while (i<j){
//         swap(arr[i],arr[j]);
//                 i++;
//                 j--;
//             }
//         }     

// int main(){
//     char arr[] = "code";
//     revchararr(arr, strlen(arr));
//     printarr(arr, strlen(arr));
//     return 0;
// }

//valid palindrome leetcode

// bool validpalindrome(char arr[], int n){
//     int i = 0;
//     int j = n-1;
//     for (int k=0; k<n; k++){
//         if (65 <= arr[k] && arr[k] < 90){
//             arr[k] = arr[k] + 32;
//         }
//     }
//     while (i<j){
//         if (not isalnum(arr[i])){
//             i++;
//             continue;
//         } if (not isalnum(arr[j])){
//             j--;
//             continue;
//         } if (arr[i] != arr[j]){
//             return false;
//         }
//         i++;
//         j--;   
//     }
//     return true;

// }

// int main(){   
//     char arr[] = "racecar";
//     cout << validpalindrome(arr,strlen(arr)) << endl;
//     return 0;
// }

// bool anagram(string s, string t, int s_size, int t_size){
//     if (s.length() == t.length()){

//         int count_check_1[26] = {0};
//         int count_check_2[26] = {0};

//         for (int i=0; i< s.length(); i++){
//             count_check_1[s[i] - 'a']++;
//             count_check_2[t[i] - 'a']++;
//         }
//         int counter = 0;
//         while (counter<26){
//             if (count_check_1[counter] == count_check_2[counter]){
//                 counter++;
//             } else{
//                 return false;
//             }
//         }
//         return true;
//         } else{
//             return false;
//         }
//     }



// int main(){
//     string s = "anagram";
//     string t = "nagaram";
//     int s_size = s.length();
//     int t_size = t.length();
//     cout << anagram(s,t,s_size,t_size);
//     return 0;
// }

//q1 assignment

// void vowelrev(string str, int x){
//         int st=0;
//         int end=x-1;

//         while (st < end){
//             char x = tolower(str[st]);
//             char y = tolower(str[end]);
//             if (x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u'){
//                 st++;
//             }
//             else if(y != 'a' && y != 'e' && y != 'i' && y != 'o' && y != 'u'){
//                 end--;
//             } else{
//                 swap(str[st],str[end]);
//                 st++;
//                 end--;
//             }
//             cout << str << endl;
//         }

//     }
    


// int main(){
//     string str;
//     getline(cin,str);
//     int x = str.length();
//     vowelrev(str,x);
// }

// int main(){
//     string str;
//     getline(cin,str);
//     int x = str.length();
//     int st = 0;
//     int end = x-1;
//     while(st < end){
//         swap(str[st],str[end]);
//         st++;
//         end--;
//     }
//     cout << str;
// }

//determine if 2 strings are close

// bool closeness_check(string word1, string word2, int word1_s, int word2_s){
//     int word1_counter[26] = {0};
//     int word2_counter[26] = {0};
//     if (word1_s == word2_s){
//         for (int i=0; i<word1_s; i++){
//             word1_counter[word1[i] - 'a']++;
//         }
//         for (int i=0; i<word2_s; i++){
//             word2_counter[word2[i] - 'a']++;
//         }
//         for (int i=0; i<26; i++){
//             if ((word1_counter[i] > 0) != (word2_counter[i] > 0)){
//                 return false;
//             }
//         }
//             sort(word1_counter, word1_counter+26);
//             sort(word2_counter, word2_counter+26);
//             for (int i=0; i<26; i++){
//                 if (word1_counter[i] != word2_counter[i]){
//                 return false;
//             } 
//         }
//     }  
//     else {
//         return false;
//     }
//     return true;
// }

 
// int main(){
//     string str1 = "cabbba";
//     string str2 = "abbccc";
//     int word1_size = str1.length();
//     int word2_size = str2.length();
//     cout << closeness_check(str1,str2,word1_size,word2_size);
// }

// void twosum(int arr[], int target,int n){
//     int idx_arr[2] = {0};
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             if ((arr[i] + arr[j] == target) && i != j){
//                 idx_arr[0] = i;
//                 idx_arr[1] = j;
//                 cout << idx_arr[0] << endl;
//                 cout << idx_arr[1] << endl;
                
//             }
//         }
//     }

// }

// bool fascinating_no(int n, string no_str){
//     string two_times_n = to_string(2*n);
//     string three_times_n = to_string(3*n);
//     string final_string = no_str + two_times_n + three_times_n;
//     int x = final_string.length();
//     for (int i=0; i<x; i++){
//         for (int j = i+1; j<x ; j++){
//             if ((final_string[i] == final_string[j]) || final_string[i] == 0 && final_string[j] == '0'){
//                 return false;
//             } 
//             }
//         }
//         return true;
//     }


// int main(){
//     int n = 100;
//     string str_num = to_string(n);
//     cout << fascinating_no(192,str_num) << endl;;
// }

//fascinating with 0(n)

// bool fascinating_no(int n, string no_str){
//     string two_times_n = to_string(2*n);
//     string three_times_n = to_string(3*n);
//     string final_string = no_str + two_times_n + three_times_n;
//     int arr[10] = {0};
//     int x = final_string.length();
//     if (x == 9){
//         for (int i=0; i<x; i++){
//         if (final_string[i] - '0' == 0){
//             return false;   
//         }
        
//         arr[final_string[i] - '0']++;
//         if (arr[final_string[i] - '0'] > 1){
//             return false;
//         }
//     }
// }
// else{
//     return false;
// }
// return true; 
// }


// int main(){
//     int n = 100;
//     string str_num = to_string(n);
//     cout << fascinating_no(192,str_num) << endl;;
// }






















