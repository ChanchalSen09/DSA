#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int BinarySearch(vector<int>arr,int target,int start,int end){
  int mid = start+(end-start)/2;
  if(arr[mid]==target){
    return mid;
  }else if (arr[mid]<target){   return BinarySearch(arr,target,mid,end);
   
  }else {return BinarySearch(arr,target,start,mid); }
}
int BinarySearch(vector<int>arr,int size,int target){
    int start = 0;
    int end = size - 1;
    int mid = 0;
    while(start<=end){
      mid =  start+(end-start)/2;
      if(arr[mid]==target){
        return mid;
      }else if(arr[mid]<target){
        start = mid+1;
      }else{
        end = mid - 1;
      }
    } 
    return -1;
}
int main()
{
    vector<int>arr={10,20,25,30,65,175,460,950};
    int size = arr.size();
    int target = 460;
    int answer = BinarySearch(arr,target,0,size);
    cout<<answer<<endl;
    return 0;
}