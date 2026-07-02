#include <iostream>
#include <climits>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        prev = next = NULL;
    }
};

class DoublyList{
public:
    Node* head;
    Node* tail;

    DoublyList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else{
             newNode->next = head;
             head->prev = newNode;
             head = newNode;
        }
    }
    void printLL(){
        Node* temp = head;
        while (temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }

    void pop_front(){
        Node* temp = head;
        if (head->next != NULL){
            head = head->next;
        }
        temp->next = NULL;
        delete temp;
    }

};

int main(){
    DoublyList dll;
    dll.push_front(4);
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);
    dll.pop_front();
    dll.printLL();
    return 0;
}