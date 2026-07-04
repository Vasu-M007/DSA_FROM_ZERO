#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
using namespace std;

//---------------------search, insert, build trie--------------

class Node{
public:
    unordered_map<char, Node*> children;
    bool endofword;
    int freq; 

    Node(){
        endofword = false;
    }
};

class Trie{
    Node* root;
public:
    Trie(){
        root = new Node();
        root->freq = -1;
    }

    void insert(string key){
        Node* temp = root;

        for (int i=0; i<key.size(); i++){
            if (temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node(); //create an empty node for children
                temp->children[key[i]]->freq = 1;
            }
            else{
                temp->children[key[i]]->freq++;
            }
            temp = temp->children[key[i]];
        }

        temp->endofword = true;
    }

    bool search(string key){
        Node* temp = root;

        for (int i=0; i<key.size(); i++){
            if (temp->children.count(key[i])){
                temp = temp->children[key[i]];
            } else{
                return false;
            }  
        }

        return temp->endofword;
    }

    string getprefix(string key){
        Node* temp = root;
        string prefix = "";

        for (int i=0; i<key.size(); i++){
            prefix += key[i];
            if (temp->children[key[i]]->freq == 1){
                return prefix;
            }

            temp = temp->children[key[i]];
        }
        return prefix;
    }

    int countHelper(Node* root){
        int ans = 0;

        for(pair<char, Node*> child : root->children){
            ans += countHelper(child.second);
        }

        return ans + 1;
    }

    //--------node counter for count unique substr problem----------

    int countNodes(){
        return countHelper(root);
    }

    //----------helper and function for longest word with all prefixes problem----

    void longesthelper(Node* root, string &ans, string temp){
        for (pair<char, Node*> child : root->children){
            if (child.second->endofword){
                temp += child.first;

                if ((temp.size() == ans.size() && temp < ans) || temp.size() > ans.size()){
                    ans = temp;
                }

                longesthelper(child.second, ans, temp);
                temp = temp.substr(0, temp.size() - 1);
            }
        }
    }

    string longeststringwithEOW(){
        string ans = "";
        longesthelper(root, ans, "");

        return ans;
    }
};

//-------------shortest unique prefix problem---------------

void prefixproblem(vector<string> dict){
    Trie trie;

    for (int i=0; i<dict.size(); i++){
        trie.insert(dict[i]);
    }

    for (int i=0; i<dict.size(); i++){
        cout << trie.getprefix(dict[i]) << " " << endl;
    }
}

//---------count unique no of substrings using prefixes of suffix method----

int countuniqueSubstr(string str){
    Trie trie;
     for (int i=0; i<str.size(); i++){

        string suffix = str.substr(i);
        trie.insert(suffix);
     }

     return trie.countNodes();
}

string longeststring(vector<string> dict){
    Trie trie;

    for (int i=0; i<dict.size(); i++){
        trie.insert(dict[i]);
    }

    return trie.longeststringwithEOW();

}

int main(){
    vector<string> dict = {"a", "banana", "app", "appl", "ap", "apply", "apple"};
    cout << longeststring(dict) << endl;
    return 0;

}

// int main(){
//     string str = "ababa";
//     cout << countuniqueSubstr(str) << endl;
//     return 0;
// }

// int main(){
//     vector<string> dict = {"zebra", "dog", "duck", "dove"};
//     prefixproblem(dict);
// }

// int main(){
//     vector<string> words = {"the", "a", "there", "their",
//     "any", "thee"};

//     Trie trie;

//     for (int i=0; i<words.size(); i++){
//         trie.insert(words[i]);
//     }


//     cout << trie.search("there") << endl;
//     return 0;
// }