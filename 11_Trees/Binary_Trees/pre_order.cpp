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

void PostOrderRecursive(Node* root){
    if(root == nullptr) return;
    PostOrderRecursive(root->left);
    PostOrderRecursive(root->right);
    cout<<root->data<<" ";
  
}
void InOrderRecursive(Node* root){
    if(root == nullptr) return;
    InOrderRecursive(root->left);
    cout<<root->data<<" ";
    InOrderRecursive(root->right);
}
int main()
{
     Node* root = new Node(4);
     root->left = new Node(10);
     root->right = new Node(12);
     PreOrderRecursive(root);
     cout<<endl;
     PostOrderRecursive(root);
     cout<<endl;
     InOrderRecursive(root);


     return 0;
}
// space o(n) time o(n)