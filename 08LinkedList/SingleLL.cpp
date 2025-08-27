#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int data1, Node *next1) {
    this->data = data1;
    this->next = next1;
  }
  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

Node *Insert(vector<int> &arr) {
  Node *head = new Node(arr[0]);
  Node *temp = head;
  for (int i = 1; i < arr.size(); i++) {
    Node *temp1 = new Node(arr[i]);
    temp->next = temp1;
    temp = temp1;
  }
  return head;
}

void PrintLL(Node *head) {
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

void SearchLL(Node *head, int data) {
  Node *temp = head;
  bool isFount = false;
  while (temp != nullptr) {
    if (temp->data == data) {
      isFount = true;
      break;
    }
    temp = temp->next;
  }
  isFount ? cout << "IS Available" : cout << "Not Available";
}

Node *DeleteLLNode(Node *head, int data) {
  SearchLL(head, data) ? cout << "Can't Delete";
  if (head == nullptr)
    return nullptr;
  Node *prev = head;
  Node *temp = head;
  if (head->data == data) {
    Node *newHead = head->next;
    head->next = nullptr;
    delete head;
    return newHead;
  }
  while (temp != nullptr) {
    if (temp->data == data) {
      prev->next = temp->next;
      temp->next = nullptr;
      delete temp;
      break;
    }
    prev = temp;
    temp = temp->next;
  }
  return head;
}
Node *reverse(Node *head){
  
}
int main() {
  vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  Node *head = Insert(arr);
  // PrintLL(head);
}
