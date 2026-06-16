#include <iostream>
#include <algorithm>
#include <climits>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class Queue{
//     Node* head;
//     Node* tail;
// public:
//     Queue(){
//        head = tail = NULL; 
//     }

//     void push(int data){
//         Node* newNode = new Node(data);
//         if (head == NULL){
//             head = tail = newNode;
//         } 
//         else{
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void pop(){
//         if (head == NULL){
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         delete temp;

//     }

//     int front(){
//         return head->data;
//     }

//     bool empty(){
//         return head == NULL;
//     }
// };

// int main(){
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

//     while (!q.empty()){
//         cout << q.front() << endl;
//         q.pop();
//     }
//     return 0;
// }

//--------------------circular queue implementation---------

// class Queue{
// public:
//     int* arr;

//     int capacity;
//     int currsize;

//     int f,r;
// public:
//     Queue(int capacity){
//         this->capacity = capacity;
//         arr = new int(capacity);
//         currsize = 0;
//         f = 0;
//         r = -1;
//     }

//     void push(int data){
//         if (currsize == capacity){
//             cout << "QUeue is full" << endl;
//             return;
//         }
//         r = (r+1) % capacity;
//         arr[r] = data;
//         currsize++;
//     }

//     void pop(){
//         if (empty()){
//             cout << "Queue is empty";
//             return;
//         }
//         f = (f+1) % capacity;
//         currsize--;
//     }
//     int front(){
//         return arr[f];
//     }

//     bool empty(){
//         return currsize == 0;
//     }

//     void printrear(){
//         cout << arr[r] << endl;
//     }
// };

// int main(){
//     Queue q(4);
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);

//     cout << q.front() << endl;
//     q.pop();
//     cout << q.front() << endl;
//     q.push(5);
//     cout << q.front() << endl;
//     q.printrear();
//     return 0;
// }

//---------------------queue using two stacks---------------

// class Queue{
// public:
//     stack<int> s1;
//     stack<int> s2;

//     void push(int data){
//         //s1 -> s2

//         while (!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();  
//         }

//         s1.push(data);

//         //s2 -> s1

//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }

//     void pop(){
//         s1.pop();
//     }

//     int front(){
//         return s1.top();
//     }

//     bool empty(){
//         return s1.empty();
//     }
// };

// int main(){
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     while(!q.empty()){
//         cout << q.front() << endl;
//         q.pop();
//     }
//     return 0;
// }

//-------------------interleave 2 queues-----------

// void interleave_queue(queue<int> &orig){
//     int n = orig.size();
//     queue<int> first;
//     for (int i=0; i< n/2; i++){
//         first.push(orig.front());
//         orig.pop();
//     }

//     while(!first.empty()){
//         orig.push(first.front());
//         first.pop();

//         orig.push(orig.front());
//         orig.pop();
//     }
// }

// int main(){
//     queue<int> orig;
//     for (int i=1; i<=10; i++){
//         orig.push(i);
//     }

//     interleave_queue(orig);

//     while(!orig.empty()){
//         cout << orig.front() << " ";
//         orig.pop();
//     }
//     cout << endl;
//     return 0;
// }

//---------------------reverse a queue----------

// void rev_queue(queue<int> &q){
//     stack<int> s;
//     while(!q.empty()){
//         s.push(q.front());
//         q.pop();
//     }
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }
// }

// int main(){
//     queue<int> q;
//     for (int i=1; i<= 5; i++){
//         q.push(i);
//     }
//     rev_queue(q);

//     while (!q.empty()){
//         cout << q.front() << endl;
//         q.pop();
//     }
//     cout << endl;
//     return 0;
// }

int main(){
    char str = '9';
    int str1 = str - '0';
    cout << str - '0'<< endl;
}