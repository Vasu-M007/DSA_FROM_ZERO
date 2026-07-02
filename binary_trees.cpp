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

//build a tree

// class Node{
// public: 
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         left = right = NULL;
//     }
// };

// static int idx = -1;

// Node* buildtree(vector<int> nodes){
//      idx++;
//      if (nodes[idx] == -1){
//         return NULL;
//      }
//      Node* currNode = new Node(nodes[idx]);
//      currNode->left = buildtree(nodes);
//      currNode->right = buildtree(nodes);

//      return currNode;

// }

// int main(){
//     vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//     Node* root = buildtree(nodes);
//     cout << "Root :" << root->data << endl;
//     return 0;
// }

//tree traversal(preorder)

// class Node{
// public: 
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         left = right = NULL;
//     }
// };

// static int idx = -1;

// Node* buildtree(vector<int> nodes){
//      idx++;
//      if (nodes[idx] == -1){
//         return NULL;
//      }
//      Node* currNode = new Node(nodes[idx]);
//      currNode->left = buildtree(nodes);
//      currNode->right = buildtree(nodes);

//      return currNode;

// }

// void preorder(Node* root){
//     if (root == NULL){
//         return;
//     }
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }


// int main(){
//     vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//     Node* root = buildtree(nodes);
//     preorder(root);
//     cout << endl;
//     return 0;
// }

// class Node{
// public: 
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         left = right = NULL;
//     }
// };

// static int idx = -1;

// Node* buildtree(vector<int> nodes){
//      idx++;
//      if (nodes[idx] == -1){
//         return NULL;
//      }
//      Node* currNode = new Node(nodes[idx]);
//      currNode->left = buildtree(nodes);
//      currNode->right = buildtree(nodes);

//      return currNode;

// }

// //preorder traversal func

// void preorder(Node* root){
//     if (root == NULL){
//         return;
//     }
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// //inorder traversal func

// void inorder(Node* root){
//     if (root == NULL){
//         return;
//     }

//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void postorder(Node* root){
//     if (root == NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// //level order

// void levelorder(Node* root){
//     if (root == NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty()){
//         Node* curr = q.front();
//         q.pop();

//         if (curr == NULL){
//             cout << endl;
//             if (q.empty()){
//                 break;
//             }
//             q.push(NULL);
//             continue;
//         }

//         cout << curr->data << " ";

//         if (curr -> left != NULL){
//             q.push(curr->left);
//         }
//         if (curr -> right != NULL){
//             q.push(curr->right);
//         }
//     }  
// }


// int main(){
//     vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//     Node* root = buildtree(nodes);
//     // preorder(root);
//     // inorder(root);
//     // postorder(root);
//     levelorder(root);
//     cout << endl;
//     return 0;
// }

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

static int idx = -1;

Node* buildtree(vector<int> nodes){
     idx++;
     if (nodes[idx] == -1){
        return NULL;
     }
     Node* currNode = new Node(nodes[idx]);
     currNode->left = buildtree(nodes);
     currNode->right = buildtree(nodes);

     return currNode;

}

// int height(Node* root){
//     if (root == NULL){
//         return 0;
//     }

//     int leftheight = height(root->left);
//     int rightheight = height(root->right);

//     int max_height = max(leftheight, rightheight) + 1;
//     return max_height;
// }

// //O(n2)

// int diameter_calculation(Node* root){
//     if (root == NULL){
//         return 0;
//     }
//     int currdiam = height(root->left) + height(root->right) + 1;
//     int leftdiam = diameter_calculation(root->left);
//     int rightdiam = diameter_calculation(root->right);

//     return max(currdiam, max(leftdiam,rightdiam));
// }

//----------sum of nodes of binary tree----------------

// int sum_calc(Node* root){
//     if (root == NULL){
//         return 0;
//     }
//     int leftsum = sum_calc(root->left);
//     int rightsum = sum_calc(root->right);

//     return leftsum + rightsum + root->data;

// }

//O(n) soln diameter calculation

// pair<int,int> diameter_calc(Node* root){
//     if (root == NULL){
//         return make_pair(0,0);
//     }
//     pair<int,int> left_info = diameter_calc(root->left);
//     pair<int,int> right_info = diameter_calc(root->right);
//     int currdiam = left_info.second + right_info.second + 1;
//     int finalDiam = max(currdiam, max(left_info.first, right_info.first));
//     int final_ht = max(left_info.second, right_info.second) + 1;

//     return make_pair(finalDiam, final_ht);
// }

// int main(){
//     vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//     Node* root = buildtree(nodes);
//     cout << endl;

//     cout << diameter_calc(root).first << endl;
//     return 0;
// }

//------------subtree of another tree----------
// bool isidentical(Node* root1, Node* root2){
//     if (root1 == NULL && root2 == NULL){
//         return true;
//     }
//     if (root1 == NULL || root2 == NULL){
//         return false;
//     }

//     if (root1->data != root2->data){
//         return false;
//     }

//     return isidentical(root1->left, root2->left)
//     && isidentical(root1->right, root2->right);
// }

// bool issubtree(Node* root, Node* subroot){
//     if (root == NULL && subroot == NULL){
//         return true;
//     }

//     if (root == NULL || subroot == NULL){
//         return false;
//     }

//     if (root->data == subroot->data){
//         if (isidentical(root,subroot)){
//             return true;
//         }
//     }

//     int isleftsubtree = issubtree(root->left, subroot);
//     if (!isleftsubtree){
//         return issubtree(root->right, subroot);
//     }
//     return true;
// }

// int main(){
//     vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//     Node* root = buildtree(nodes);

//     Node* subroot = new Node(2);
//     subroot->left = new Node(4);
//     subroot->right = new Node(5);

//     cout << issubtree(root, subroot) << endl;

//     return 0;
// }

//---------------c++ map function----------

// int main(){
//     map<int, string> m;
//     m[101] = "rahul";
//     m[110] = "neha";
//     m[131] = "rahul";

//     cout << m[101] << endl;
//     cout << m.count(101);

//     for (auto it : m){
//         cout << it.first << "--" << it.second << endl;
//     }
//     return 0;
// }

// void topview(Node* root){
//     queue<pair<Node*,int>> q;
//     map<int, int> m;

//     q.push(make_pair(root,0));
//     while (!q.empty()){
//         pair<Node*, int> curr = q.front();
//         q.pop();

//         Node* currNode = curr.first;
//         int currdist = curr.second;

//         if (m.count(currdist) == 0){
//             m[currdist] = currNode->data;
//         }

//         if (currNode->left != NULL){
//             q.push(make_pair(currNode->left, currdist - 1));
//         }

//         if (currNode->right != NULL){
//             q.push(make_pair(currNode->right, currdist + 1));
//         }
//     }
//     for (auto it:m){
//         cout << it.second << " ";
//     }
//     cout << endl;
// }

//--------kth level of a tree print--------

//-------my approach-----------

// void kth_level_1(Node* root, int k){
//     vector<Node*> ans_arr;
//     if (root == NULL){
//         return;
//     }

//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     int level_track = 1;

//     while (!q.empty()){
//         Node* curr = q.front();
//         q.pop();
        
//         if (curr == NULL){
//             level_track++;
//             if (k == 1){
//                 cout << root->data;
//                 return;
//             }
//             if (level_track == k){
//                 while (!q.empty() && q.front() != NULL){
//                 cout << q.front()->data << " ";
//                 q.pop();
//             }
//             return;
//             }

//             if (q.empty()){
//                 break;
//             }
//             q.push(NULL);
//             continue;
//         }

//         if (curr -> left != NULL){
//             q.push(curr->left);
//         }
//         if (curr -> right != NULL){
//             q.push(curr->right);
//         }
//     }  
// }

// void kthlevel2(Node* root, int k, int currlevel){
//     if (root == NULL){
//         return;
//     }

//     if (currlevel == k){
//         cout << root->data << " ";
//         return;
//     }

//     kthlevel2(root->left, k, currlevel+1);
//     kthlevel2(root->right, k, currlevel+1);
// }

//------lowest common ancestor - optimized approach------

// Node* LCA(Node* root, Node* n1, Node* n2){
//     if (root == NULL){
//         return NULL;
//     }

//     if ((root->data == n1->data) || (root->data == n2->data)){
//         return root;
//     }

//     Node* leftlca = LCA(root->left,n1,n2);
//     Node* rightlca = LCA(root->right, n1, n2);

//     if (leftlca == NULL && rightlca == NULL){
//         return NULL;
//     }

//     if (leftlca != NULL && rightlca == NULL){
//         return leftlca;
//     }

//     if (leftlca == NULL && rightlca != NULL){
//         return rightlca;
//     }
//     return root;
// }


// int dist(Node* root, Node* n){
//     if (root == NULL){
//         return -1;
//     }

//     if (root->data == n->data){
//         return 0;
//     }

//     int leftdistval = dist(root->left,n);
    
//     if (leftdistval != -1){
//         return leftdistval + 1;
//     }

//     int rightdistval = dist(root->right, n);

//     if (rightdistval != -1){
//         return rightdistval + 1;
//     }

//     return -1;
    
// }
 
// int minDist(Node* root, Node* n1, Node* n2){
//     Node* lca = LCA(root,n1,n2);

//     if (root == NULL){
//         return -1;
//     }

//     int dist1 = dist(lca, n1);
//     int dist2 = dist(lca,n2);

//     return dist1 + dist2;
// }


//--------------------kth ancestor of a node------------
//     Node* path_to_node(Node* root, int n,vector<int> &path){
//     if (root == NULL){
//         return NULL;
//     }

//     if (root->data == n){
//         path.push_back(root->data);
//         return root;
//     }

//     Node* left_node = path_to_node(root->left,n,path);
//     Node* right_node = path_to_node(root->right,n,path);

//     if (left_node == NULL && right_node == NULL){
//         return NULL;
//     }

//     path.push_back(root->data);
//     return root;
// }

// int tree_sum(Node* root){
//     if (root == NULL){
//         return 0;
//     }
//     int oldNode = root->data;

//     int left_node = tree_sum(root->left);
//     int right_node = tree_sum(root->right);

//      int new_values = left_node + right_node;
//      root->data = new_values;

//      return oldNode + new_values;
// }

// void levelorder(Node* root){
//     if (root == NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty()){
//         Node* curr = q.front();
//         q.pop();

//         if (curr == NULL){
//             cout << endl;
//             if (q.empty()){
//                 break;
//             }
//             q.push(NULL);
//             continue;
//         }

//         cout << curr->data << " ";

//         if (curr -> left != NULL){
//             q.push(curr->left);
//         }
//         if (curr -> right != NULL){
//             q.push(curr->right);
//         }
//     }  
// }

// int main(){
//     vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//     Node* root = buildtree(nodes);
//     Node* n1 = new Node(4);
//     Node* n2 = new Node(6);
//     int k = 2;
//     vector<int> path;
//     // path_to_node(root,4,path);
//     // for (int i=0; i<path.size(); i++){
//     //     if (i+1 == k){
//     //         cout << path[i+1] << endl;
//     //     }

//     // }
//     tree_sum(root);
//     levelorder(root);

//     return 0;
// }

 











