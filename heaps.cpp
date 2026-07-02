#include <iostream>
#include <algorithm>
#include <climits>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

//------push, pop, front functions in Heap----------

// class Heap{
//     vector<int> vec;
// public:
//     void push(int val){
//         //step 1
//         vec.push_back(val);
//         //fix heap
//         int x = vec.size() - 1;
//         int parI = (x - 1) / 2;

//         while (parI >= 0 && vec[x] > vec[parI]){ //O(logn), reverse the condn for min heap
//             swap(vec[x], vec[parI]); 
//             x = parI;
//             parI = (x - 1) / 2;
//         }
//     }

//     //----------pop logic----------

//     void heapify(int i){
//         if (i > vec.size()){
//             return;
//         }
//         int l = 2*i + 1;
//         int r = 2*i + 2;

//         int maxIdx = i;
//         if (l < vec.size() && vec[l] > vec[maxIdx]){
//             maxIdx = l;
//         }
//         if (r < vec.size() && vec[r] > vec[maxIdx]){
//             maxIdx = r;
//         }

//         swap(vec[i],vec[maxIdx]);
//         if (maxIdx != i){
//             heapify(maxIdx);
//         }
//     }

//     void pop(){
//         swap(vec[0], vec[vec.size() - 1]);
//         vec.pop_back();
//         heapify(0);

//     }

//     int top(){
//         return vec[0];
//     }

//     bool empty(){
//         return vec.size() == 0;
//     }
// };

// int main(){
//     Heap heap;
//     heap.push(50);
//     heap.push(10);
//     heap.push(100);

//     cout << "top : " << heap.top() << endl; //print 100
//     heap.pop();
//     cout << "top : " << heap.top() << endl; //prints 50
//     return 0;
// }

//--------heap testing------

// int main(){
//     priority_queue<int, vector<int>, greater<int>> pq; //reverse order(min first)
//     pq.push(5);
//     pq.push(10);
//     pq.push(3);

//     while (!pq.empty()){
//         cout << "top :" << pq.top() << endl;
//         pq.pop();
//     }
//     return 0;
// }

//-----priority queue for objects-------

// class Student{
// public:
//     string name;
//     int marks;

//     Student(string name, int marks){
//         this->name = name;
//         this->marks = marks;
//     }

//     bool operator<(const Student &obj) const {
//         return this->marks < obj.marks; //ascending ord //if we use name instead of marks sorting happens on name
//     } //for min heap do > sign inside the operator overload func
// };

// int main(){
//     priority_queue<Student> pq;
//     pq.push(Student("Aman",85));
//     pq.push(Student("Shikha",95));
//     pq.push(Student("Vasu",65));

//     while (!pq.empty()){
//         cout << "top = " << pq.top().name << ", " <<  pq.top().marks << endl;
//         pq.pop();
//     }
//     return 0;
// }

//priority_queue for pairs---------------

// struct ComparePair{
//     bool operator()(pair<string, int> &p1, pair<string, int> &p2){
//         return p1.second < p2.second; //for min heap use >
//     }
// };

// int main(){
//     priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair> pq; //default is max heap
//     pq.push(make_pair("Aman",85));
//     pq.push(make_pair("Shikha",95));
//     pq.push(make_pair("Vasu",65));

//     while (!pq.empty()){
//         cout << "top = " << pq.top().first << ", " <<  pq.top().second << endl;
//         pq.pop();
//     }
//     return 0;
// }

//------------------Heap Sort Algo------------

// void heapify(int i, vector<int> &arr, int n){
//     int left = 2*i + 1;
//     int right = 2*i + 2;
//     int maxIdx = i;

//     if (left < n && arr[left] > arr[maxIdx]){ //do < for descending
//         maxIdx = left;
//     }

//     if (right < n && arr[right] > arr[maxIdx]){ // do < for descending
//         maxIdx = right;
//     }

//     if (maxIdx != i){
//         swap(arr[i], arr[maxIdx]);
//         heapify(maxIdx,arr,n);
//     }
// }

// void heapsort(vector<int> &arr){
//     int n = arr.size();
//     //step1 : build maxheap
//     for (int i= (n/2) - 1; i>=0; i--){
//         heapify(i , arr, n);
//     }

//     for (int i= n-1; i>=0; i--){
//         swap(arr[0], arr[i]);
//         heapify(0,arr,i);
//     }
// }

// int main(){
//     vector<int> arr = {1,4,2,5,3};
//     heapsort(arr);

//     for (int i=0; i<arr.size(); i++){
//         cout << arr[i] << " ";
//     }
    
//     cout << endl; //finally printed the sorted array
//     return 0;
// }

//-----------Min cost to connect N ropes---------------

// int connectNRopes(vector<int> ropes){
//     priority_queue<int, vector<int>, greater<int>> pq(ropes.begin(), ropes.end());
//     int cost = 0;
    
//     while (pq.size() > 1){
//         int min1 = pq.top();
//         pq.pop();
//         int min2 = pq.top();
//         pq.pop();

//         cost += min1 + min2;
//         pq.push(min1 + min2);
//     }

//     cout << "min cost is : " << cost << endl;
//     return cost;

// }

// int main(){
//     vector<int> ropes = {4,3,2,6};
//     connectNRopes(ropes);
//     return 0;
// }