#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Search(vector<int>arr,int size , int idx,int target){
   if(idx>=size){
    return -1; 
   }
   if(arr[idx]==target){
    return idx;
   }
   return Search(arr,size,++idx,target);
}
int main()
{
    vector<int>arr{1,2,6,4,3,5,2,6,6};
    int size = arr.size(); 
    int idx = 0;
    int target = 5;
    int result = Search(arr,size,idx,target);
    cout<<result<<endl;
 
    return 0;
}