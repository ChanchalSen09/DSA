#include<iostream>
#include<algorithm>
using namespace std;
struct Node{
    int data; 
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;    
    };
};

void PreOrderRecursive(Node* root){
    if(root == nullptr) return;
    cout<<root->data<<" ";
    PreOrderRecursive(root->left);
    PreOrderRecursive(root->right);
  
}
int main()
{
     Node* root = new Node(4);
     root->left = new Node(10);
     root->right = new Node(12);
     PreOrderRecursive(root);
     return 0;
}
// space o(n) time o(n)