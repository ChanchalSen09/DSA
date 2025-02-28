#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void RotatebyOne(vector<int>&arr,int size){
    int temp =arr[size-1];
    int next = 0;
    for(int i = 0;i <size;i++){
    next = arr[i];
    arr[i] = temp;
    temp = next;
    } 
}
int main()
{
     vector<int>arr={1,2,3,4,5,6};
     RotatebyOne(arr,arr.size());
     for(int a:arr){
        cout<<a<<" ";
     }
     return 0;
}