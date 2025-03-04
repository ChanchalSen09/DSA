// Question  
// Given a sorted or unsorted array of integers and a target number, 
// find the first occurrence (index) of the target number in the array. 
// If the number is not present, return -1.  

// Example 1  
// Input: `arr = [1, 2, 2, 3, 4, 4, 4, 5]`, `target = 4`  
// Output: `4`  

// Example 2 
// Input: `arr = [10, 20, 30, 40, 50]`, `target = 25`  
// Output: `-1`

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FindOccurrence(vector<int>arr,int target){
    int start=0;
    int ans = -1;
    int end = arr.size()-1;
    int mid = 0;
  while(start<=end){
    mid = start+(end-start)/2;
    if(arr[mid]==target){
        ans = mid;
        end = mid-1;
    }else if(arr[mid]>target){
        end = mid-1;
    }else{
        start = mid+1;
    }
  }
  return ans;
}
int main()
{
    vector<int>arr= {1, 2, 2, 3, 4, 4, 4, 5};
    int target = 4;
    int answer = FindOccurrence(arr,target);
    cout<<answer<<endl;
    return 0;
}