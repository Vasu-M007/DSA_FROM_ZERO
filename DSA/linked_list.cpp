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

public:
      Node(int val){
        data = val;
        next = NULL;
      }

    //   ~Node(){
    //     if (next != NULL){
    //     delete next;
    //     next = NULL;
    //     }
    //   }
};

class List{
public:
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }

    // ~List(){
    //     if (head != NULL){
    //         delete head;
    //         head = NULL;
    //     }
    // }
    void push_front(int val){
        Node* newNode = new Node(val);
        // Node* newNode(val) //we can do this but it creates node statically
        //which deletes after we go out of the function

        if (head == NULL){ //if LL is empty
            head = tail = newNode;
        } else{ // if LL has element
            newNode->next = head; //new node next points to head
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        // Node* newNode(val) //we can do this but it creates node statically
        //which deletes after we go out of the function

        if (head == NULL){ //if LL is empty
            head = tail = newNode;
        } else{ // if LL has element
            tail->next = newNode; 
            tail = newNode;
        }
    }

    void printLL(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void insert_node(int val,int pos){
        Node* newNode = new Node(val); //newnode address
        Node* temp = head;

        for(int i=0; i<pos-1; i++){
            if (temp == NULL){
                cout << "poss is invalid";
                return;
            }
            temp = temp->next; 
        }
        newNode->next = temp->next;
        temp->next = newNode;

    }

    void pop_front(){
        if (head == NULL){
            cout << "LL is empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;   
    }

    //linear key search

    int key_search(int key){
        Node* temp = head;
        int idx = 0;
        while (temp != NULL){
            if (temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    //recursive key search

    int recursive_key_search(Node* temp,int key){
        if (temp == NULL){
            return -1;
        }
        if (temp->data == key){
            return 0;
        }
        int idx = recursive_key_search(temp->next, key);
        if (idx == -1){
            return -1;
        }
        return idx + 1;
    }

    int search_rec(int key){
        return recursive_key_search(head,key);
    }

    void print_rev_ll(){
        Node* curr = head;
        Node* prev = NULL;

        while(curr != NULL){
            Node* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;

        }
        head = prev;
    }

    void recursion_rev_ll(Node* temp){
        temp = head;
        if (temp == NULL || temp->next == NULL){
            return;
        }
        recursion_rev_ll(temp->next);
        
    }

    int linkedlist_length(){
        Node* temp = head;
        int count = 0;
        while (temp != NULL){
            count++;
            temp = temp -> next;
        }
        return count;
    }

    void remove_nth_node(int n){
        Node* temp = head;
        int count = linkedlist_length();
        if (n == count){
            pop_front();
            return;
        }
        for (int i=0; i<count - n - 1; i++){
            temp = temp->next;
        }
        Node* todel = temp->next;
        temp->next = todel->next;
        delete todel;
    }

    Node* merge(Node* left, Node* right){
        List ans;
        Node* i = left;
        Node* j = right;
        while(i != NULL && j != NULL){
            if (i->data < j->data){
                ans.push_back(i->data);
                i = i->next;
            } else{
                ans.push_back(j->data);
                j = j->next;
            }
        }
        while (i != NULL){
            ans.push_back(i->data);
            i = i->next;
        }
        while (j != NULL){
            ans.push_back(j->data);
            j = j->next;
        }
        return ans.head;
    }

    Node* splitAtMid(Node* head){
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev->next != NULL){
            prev->next = NULL;
        }
        return slow;
    }

    Node* mergesort(Node* head){
        if (head == NULL || head->next == NULL){
            return head;
        }
        Node* rightHead = splitAtMid(head);

        Node* left = mergesort(head);
        Node* right = mergesort(rightHead);

        return merge(left,right);
    }
};

int main(){
    List ll;
    ll.push_front(0);
    ll.push_front(11);
    ll.push_front(8);
    ll.push_front(10);
    ll.push_front(1);
    // ll.pop_back();
    // ll.print_rev_ll();
    cout << ll.linkedlist_length() << endl;
    ll.printLL();
    ll.head = ll.mergesort(ll.head);
    ll.printLL();
    return 0;
}