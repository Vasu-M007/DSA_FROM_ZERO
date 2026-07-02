#include <iostream>
#include <climits>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <map>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

// Node* insert(Node* root, int val){ //O(logn)
//     if (root == NULL){
//         root = new Node(val);
//         return root;
//     }
//     if (val < root->data){
//         root->left = insert(root->left,val);
//     }
//     else{
//         root->right = insert(root->right,val);
//     }
//     return root;
// }

// Node* buildBST(int arr[], int n){
//     Node* root = NULL;

//     for(int i=0; i<n; i++){
//         root = insert(root,arr[i]);
//     }
//     return root;
// }

// bool searchkey(Node* root, int key){
//     if (root == NULL){
//         return false;
//     }

//     if (root->data == key){
//         return true;
//     }
//     if(root->data < key){
//         return searchkey(root->right, key);
//     } 
//     else{
//         return searchkey(root->left, key);
//     }
// }

// void inorder(Node* root){
//     if (root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int main(){
//     int arr[6] = {5,1,3,4,2,7};
//     Node* root = buildBST(arr,6);
//     inorder(root);
//     cout << endl;
//     cout << searchkey(root,10);
//     return 0;
// }

//------------------Largest BST in BT--------------

// class Info{
// public:
//     bool isBST;
//     int min;
//     int max;
//     int sz;

//     Info(bool isBST, int min, int max, int sz){
//         this->isBST = isBST;
//         this->min = min;
//         this->max = max;
//         this->sz = sz;   
//     }
// };

// static int maxSize;
// Info* largestBST(Node* root){
//     if (root == NULL){
//         return new Info(true, INT_MAX, INT_MIN, 0);
//     }
//     // if (root == NULL){
//     //     return NULL;
//     // }

//     // if (root->left == NULL && root->right == NULL){
//     //     new Info(true, root->data, root->data, 1);
//     // }

//     Info* leftinfo = largestBST(root->left);
//     Info* rightinfo = largestBST(root->right);

//     int currMin = min(root->data, min(leftinfo->min, rightinfo->min));
//     int currMax = max(root->data, max(leftinfo->max, rightinfo->max));
//     int currSz = leftinfo->sz + rightinfo->sz + 1;

//     if (leftinfo->isBST && rightinfo->isBST
//     && root->data > leftinfo->max && root->data < rightinfo->min){
//         maxSize = max(maxSize, currSz);
//         return new Info(true, currMin, currMax, currSz);
//     }

//     return new Info(false, currMin, currMax, currSz);
// }

// int main(){
//     Node* root = new Node(50);
//     root->left = new Node(30);
//     root->left->left = new Node(5);
//     root->left->right = new Node(20);

//     root->right = new Node(60);
//     root->right->left = new Node(45);
//     root->right->right = new Node(70);
//     root->right->right->left = new Node(65);
//     root->right->right->right = new Node(80);

//     largestBST(root);
//     cout << "max size : " << maxSize << endl;
//     return 0;
// }

void inorder_arr(Node* root, vector<int>& arr){
    if (root == NULL){
        return;
    }

    inorder_arr(root->left, arr);
    arr.push_back(root->data);
    inorder_arr(root->right, arr);
}

Node* merge_2bst(int st, int end,
vector<int>& arr){

    if (st > end){
        return NULL;
    }

    int mid = st + (end - st) / 2;
    Node* nodeval = new Node(arr[mid]);
    nodeval->left = merge_2bst(st,mid-1,arr);
    nodeval->right = merge_2bst(mid+1,end,arr);

    return nodeval;
}

int main(){
    Node* root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(4);

    Node* root2 = new Node(9);
    root2->left = new Node(3);
    root2->right = new Node(12);

    vector<int> arr1, arr2;

    inorder_arr(root1, arr1);
    inorder_arr(root2, arr2);

    vector<int> merged;

    int i = 0, j = 0;

    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            merged.push_back(arr1[i++]);
        }else{
            merged.push_back(arr2[j++]);
        }
    }

    while(i < arr1.size())
        merged.push_back(arr1[i++]);

    while(j < arr2.size())
        merged.push_back(arr2[j++]);

    Node* root = merge_2bst(0,merged.size() - 1, merged);

    vector<int> ans;
    inorder_arr(root, ans);

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}



