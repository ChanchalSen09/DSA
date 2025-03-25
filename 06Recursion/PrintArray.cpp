#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void PrintArray(vector<int>arr,int size , int idx){
   if(idx>=size){
    return;
   }
   cout<<arr[idx]<<" ";
   return PrintArray(arr,size,++idx);
}
int main()
{
    vector<int>arr{1,2,6,4,3,5,2,6,6};
    int size = arr.size(); 
    int idx = 0;
    PrintArray(arr,size,idx);
 
    return 0;
}