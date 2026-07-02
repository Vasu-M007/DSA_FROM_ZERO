//valid anagram
#include <iostream>
#include <string>
using namespace std;

bool anagram(string s, string t, int s_size, int t_size){
    if (s.length() == t.length()){

        int count_check_1[26] = {0};
        int count_check_2[26] = {0};

        for (int i=0; i< s.length(); i++){
            count_check_1[s[i] - 'a']++;
            count_check_2[t[i] - 'a']++;
        }
        int counter = 0;
        while (counter<26){
            if (count_check_1[counter] == count_check_2[counter]){
                counter++;
            } else{
                return false;
            }
        }
        return true;
        } else{
            return false;
        }
    }

int main(){
    string s = "anagram";
    string t = "nagaram";
    int s_size = s.length();
    int t_size = t.length();
    cout << anagram(s,t,s_size,t_size);
    return 0;
}


