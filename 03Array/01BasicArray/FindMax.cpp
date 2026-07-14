#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void findMIN(vector<int>arr,int size){
       int min=INT_MIN;
     for(int i =0;i<size;i++){
        if(arr[i]>min){
            min = arr[i];
        }
     }
     cout<<min<<endl;
}
void secondLarge(vector<int>arr,int size){
       int min=INT_MIN;
       int second = INT_MIN;
     for(int i =0;i<size;i++){
        if(arr[i]>min){
            second = min;
            min = arr[i];
        }
       if(arr[i]>second&&arr[i]<min){
         second = arr[i];
        }
     }
     cout<<second;
}
bool CheckArray(vector<int>arr,int size){
    for(int i = 0;i<size-1;i++){
    if(arr[i]>arr[i+1]){
        return false;
            }
 }
 return true;
}
int main()
{
     vector<int>arr={3,4,5,1,2};
     int size = arr.size();
    //  findMIN(arr,size);
    secondLarge(arr,size);
//  bool result =   CheckArray(arr,size);
//  result ? cout<<"Sorted" : cout<<"notSorted";   
 return 0;
}