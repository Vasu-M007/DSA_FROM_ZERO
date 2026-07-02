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

    Node(){
        endofword = false;
    }
};

class Trie{
    Node* root;
public:
    Trie(){
        root = new Node();
    }

    void insert(string key){
        Node* temp = root;

        for (int i=0; i<key.size(); i++){
            if (temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node(); //create an empty node for children
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
};

int main(){
    vector<string> words = {"the", "a", "there", "their",
    "any", "thee"};

    Trie trie;

    for (int i=0; i<words.size(); i++){
        trie.insert(words[i]);
    }

    cout << trie.search("there") << endl;
    return 0;
}