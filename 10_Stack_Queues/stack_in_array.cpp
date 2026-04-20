#include <iostream>
#include <vector>
using namespace std;
#define MAX 100
class Stack{
    private:
    vector<int>arr;
    public:
    void push(int val){
        if( arr.size() < MAX ){
        arr.push_back(val);
        }else{
 cout<<"Stack Overflow";
        }
    }
    void pop(){
        if(!arr.empty()){
        arr.pop_back();
        }else{
            cout<<"Stack Underflow";
        }
    }
    void empty(){
        if(arr.empty()){
            cout<<"Stack is Empty";
        }
    }
    void print(){
        for(int i:arr){
            cout<<i<<" ";
        }
    }
};


int main() {
   Stack st;
   st.push(10);
   st.print();
    return 0;
}