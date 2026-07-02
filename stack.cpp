#include <iostream>
#include <climits>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <stack>
using namespace std;

// template<class T>
// class Stack{
//     vector<T> vec;
// public:

//     void push(T val){
//         vec.push_back(val);
//     }

//     void pop(){
//         if (isEmpty()){
//             cout << "stack empty";
//             return;
//         }

//         vec.pop_back();
//     }

//     T top(){
//         int lastidx = vec.size() - 1;
//         return vec[lastidx];
//     }

//     bool isEmpty(){
//         return vec.size() == 0;
//     }
// };

// int main(){ 
//     // Stack<int> s; //a new form of object creating using template
//     // s.push(3);
//     // s.push(2);
//     // s.push(1);

//     Stack <char> s;
//     s.push('c');
//     s.push('b');
//     s.push('a');
//     while (not s.isEmpty()){
//         cout << s.top() << " ";
//         s.pop();
//     }
//     return 0;
// }

//------------stack using ll----------------

// template<class T>
// class Node{
// public:
//     T data;
//     Node* next;
// public: 
//     Node(T val){
//         data = val;
//         next = NULL;
//     }
// };

// template<class T>
// class Stack{
// public:
//     Node<T>* head;

// public:
//     Stack(){
//         head = NULL;
//     }
//     void push(T val){
//         Node<T>* newNode = new Node(val);
//         if (head == NULL){
//             head = newNode;
//         } else{
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void pop(){
//         Node<T>* temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }

//     T top(){
//         return head->data; //head
//     }

//     bool isEmpty(){
//         return head == NULL;
//     }
// };

// int main(){ 
//     // Stack<int> s; //a new form of object creating using template
//     // s.push(3);
//     // s.push(2);
//     // s.push(1);

//     Stack <char> s;
//     s.push('c');
//     s.push('b');
//     s.push('a');
//     while (not s.isEmpty()){
//         cout << s.top() << " ";
//         s.pop();
//     }
//     return 0;
// }

//--------push at bottom------------------

// void pushAtbottom(stack<int> &s, int val){
//     if(s.empty()){
//         s.push(val);
//         return;
//     }

//     int temp = s.top();
//     s.pop();
//     pushAtbottom(s,val);
//     s.push(temp);
// }

// int main(){
//     stack<int> s;
//     s.push(3);
//     s.push(2);
//     s.push(1);

//     pushAtbottom(s,4);
//     while(!s.empty()){
//         cout << s.top() << endl;
//         s.pop();
//     }
//     return 0;
// }

//-----------reverse a string------------

// string revstring(string str){
//     string ans;
//     stack<char> s;

//     for (int i=0; i<str.size(); i++){
//         s.push(str[i]);
//     }

//     while(!s.empty()){
//         char top = s.top();
//         ans.push_back(top);
//         s.pop();
//     }
//     return ans;
// }

// int main(){
//     string str = "abcd";
//     cout << revstring(str) << endl;
//     return 0;
// }

//---------reverse a stack--------------

// void pushAtbottom(stack<int> &s, int val){
//     if(s.empty()){
//         s.push(val);
//         return;
//     }

//     int temp = s.top();
//     s.pop();
//     pushAtbottom(s,val);
//     s.push(temp);
// }

// void revstack(stack<int> &s){
//     if (s.empty()){
//         return;
//     }

//     int temp = s.top();
//     s.pop();
//     revstack(s);
//     pushAtbottom(s,temp);
// }

// int main(){
//     stack<int> s;
//     s.push(3);
//     s.push(2);
//     s.push(1);
//     revstack(s);
//     while(!s.empty()){
//          cout << s.top() << endl;
//          s.pop();
//     }
//     return 0;
// }

// bool isDuplicate(string str){
//     stack<char> s;
//     for (int i=0; i<str.size(); i++){
//         char ch = str[i];
//         if (ch == ')'){
//             int count = 0;

//             while (!s.empty() && s.top() != '('){
//                 s.pop();
//                 count++;
//             }

//             if (count <=1){
//                 return true;
//             }
//             s.pop();
//         }
//         else{
//             s.push(ch);
//         }
//     }
//     return false;
// }

// int main(){
//     string str1 = "((a+b))";
//     string str2 = "((a+b) + (c+d))";
//     cout << isDuplicate(str2) << endl;

// }

