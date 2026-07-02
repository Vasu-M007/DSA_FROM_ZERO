#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
using namespace std;

// class Node{
// public:
//     string key;
//     int val;
//     Node* next;

//     Node(string key, int val){
//         this->key = key;
//         this->val = val;
//         next = NULL;
//     }

//     ~Node(){
//         if (next != NULL){ //to delete full linked list
//             delete next;
//         }
//     }
// };
 
// class HashTable{
//     int totsize;
//     int currsize;

//     Node** table;

//     int Hashfunction(string key){
//         int idx = 0;
//         for(char ch : key){
//             idx = (idx + ch * ch) % totsize;
//         }
//         return idx;
//     }
//     //-----------rehashing-----------

//     void rehash(){ //O(n)
//        Node** oldtable = table;
//        int oldsize = totsize;
       
//        totsize = 2*totsize;
//        table = new Node*[totsize];

//        for (int i=0; i<totsize; i++){
//             table[i] = NULL;
//         }

//         currsize = 0;

//         for (int i=0; i<oldsize; i++){
//             Node* temp = oldtable[i];

//             while (temp != NULL){
//                 insert(temp->key, temp->val);
//                 temp = temp->next;
//             }

//             if (oldtable[i] != NULL){
//                 delete oldtable[i];
//             }
//         }
//         delete[] oldtable;
//     }

// public:
//     HashTable(int size){
//         totsize = size;
//         currsize = 0;

//         table = new Node*[totsize];

//         for (int i=0; i<totsize; i++){
//             table[i] = NULL;
//         }
//     }
 
//     void insert(string key, int val){
//         int idx = Hashfunction(key);
//         Node* newNode = new Node(key, val);

//         newNode->next = table[idx];
//         table[idx] = newNode;

//         currsize++;
//         double lambda = currsize / (double)totsize;

//         if(lambda > 1){
//             rehash();
//     }
// }

//     bool exists(string key){
//         int idx = Hashfunction(key);
//         Node* temp = table[idx];

//         while (temp != NULL){
//             if (temp->key == key){
//                 return true;
//             }
//             temp = temp->next;
//         }
//         return false;
//     }

//     int search(string key){
//         int idx = Hashfunction(key);
//         Node* temp = table[idx];

//         while (temp != NULL){
//             if (temp->key == key){
//                 return temp->val;
//             }
//             temp = temp->next;
//         }
//         return -1;
//     }

//     void remove(string key){
//         int idx = Hashfunction(key);
//         Node* temp = table[idx];
//         Node* prev = temp;

//         while(temp != NULL){
//             if (temp->key == key){
//                 if (prev == temp){
//                     table[idx] = temp->next;
//                 } else{
//                     prev->next = temp->next;
//                 }
//             }
//             prev = temp;
//             temp = temp->next;
//         }
//     }

//     void print(){
//         for (int i=0; i<totsize; i++){
//             cout << "idx:" << i;
//             Node* temp = table[i];
//             while (temp != NULL){
//                 cout << " " << temp->key << "," << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << endl;
//         }
//     }
// };

// int main(){
//     HashTable ht(5);
//     ht.insert("India", 150);
//     ht.insert("China", 150);
//     ht.insert("US", 50);
//     ht.insert("Nepal", 10);
//     ht.insert("UK", 20);

//     ht.print();

//     ht.remove("China");
//     ht.print(); //china node removed
//     return 0;
// }

//---------unordered_map stl--------------

// int main(){
//     unordered_map<string, int> m;

//     m["china"] = 150;
//     m["india"] = 150;
//     m["US"] = 50;
//     m["Nepal"] = 10;

//     for (auto ch : m){
//         cout << ch.first << " " << ch.second << endl;
//     }

//     int x = m.count("US");
//     cout << x << endl;

//     m.erase("india");

//     x = m.count("india");
//     cout << x << endl;

//     return 0;
// }

//--------------unordered sets-----------

// int main(){
//     unordered_set<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(5);
//     s.insert(3);

//     //duplicates dont get inserted into the set

//     s.insert(1);
//     s.insert(2);
//     s.insert(5);
//     s.insert(3);

//     cout << s.size() << endl;

//     if (s.find(10) != s.end()){
//         cout << "3 exists" << endl;
//     }
//     else{
//         cout << "3 does not exist" << endl;
//     }

//     for (auto el : s){
//         cout << el << endl; //random ordered
//     }
//     return 0;
// }

//-----------ordered sets-----------

// int main(){
//     set<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(5);
//     s.insert(3);

//     //duplicates dont get inserted into the set

//     s.insert(1);
//     s.insert(2);
//     s.insert(5);
//     s.insert(3);

//     cout << s.size() << endl;

//     if (s.find(10) != s.end()){
//         cout << "3 exists" << endl;
//     }
//     else{
//         cout << "3 does not exist" << endl;
//     }

//     for (auto el : s){
//         cout << el << endl; //random ordered
//     }
//     return 0;
// }

//----------------itinerary from tickets problem-------------

// void printiternary(unordered_map<string, string> tickets){
//     unordered_set<string> to;

//     for (auto ticket : tickets){
//         to.insert(ticket.second);
//     }

//     string start = "";

//     for (auto ticket : tickets){
//         if (to.find(ticket.first) == to.end()){
//             start = ticket.first;
//         }
//     }

//     cout << start << "->";

//     while (tickets.count(start)){
//         cout << tickets[start] << "->";
//         start = tickets[start];
//     }

//     cout << "destination" << endl;
// }

// int main(){
//     unordered_map<string, string> tickets;
//     tickets["chennai"] = "bengaluru";
//     tickets["mumbai"] = "delhi";
//     tickets["goa"] = "chennai";
//     tickets["delhi"] = "goa";

//     printiternary(tickets);

//     return 0;
// }

//-------larget subarray with sum 0---------------

// int largestsubsum(vector<int> arr){
//     unordered_map<int, int> m; //sum,idx

//     int sum = 0;
//     int ans = 0;

//     for (int j=0; j<arr.size(); j++){
//         sum += arr[j];

//         if (m.count(sum)){
//             int currlen = j - m[sum];
//             ans = max(ans, currlen);
//         }
//         else{
//             m[sum] = j;
//         } 
//     }
//     return ans;
// }

// int main(){
//     vector<int> arr = {15,-2,2,-8,1,7,10};
//     cout << largestsubsum(arr);
//     return 0;
// }


