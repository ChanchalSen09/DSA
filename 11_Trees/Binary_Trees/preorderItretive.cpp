#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
struct Node{
   int data;
   Node* left;
   Node* right;
   Node (int val){
   data = val;
   left = nullptr;
   right=nullptr;
  }
};
vector<int> Preorder (Node* root){
  vector<int>ans;  
  if (root == NULL) return ans;
  stack<Node*> st;
  st.push(root);
  while(!st.empty()){
    root = st.top();
    st.pop();
    ans.push_back(root->data);
    if(root->right!=NULL){
        st.push(root->right);
    }
    if(root->left!=NULL){
        st.push(root->left);
    }
  }
  return ans;
}
int main()
{ 
    Node* root = new Node(5);
    root->left = new Node (410);
    root->right = new Node(14);
    root->left->right=new Node(41);
    vector<int>anss = Preorder(root);
    for(int x : anss){
        cout<<x<<" ";
    }
    return 0;
}