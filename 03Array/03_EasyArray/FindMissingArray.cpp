#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Input: arr1 = [4, 3, 5, 1, 2], arr2 = [5, 3, 1, 2]  
//Output: 4  
int findMissingArray(vector<int>arr,int size){
int start = 0;
int end = size - 1;
int mid = 0;
int ans = -1;
while(start<=end){
    mid = start+(end-start)/2;
    if(arr[mid]-mid==1){
        start = mid+1;
    }else {
        ans = mid;
        end=mid-1;
    }
}
return ans;
}
int main()
{
  vector<int>arr={1,2,3,4,6};
  int size = arr.size();
  int result =findMissingArray(arr,size);
  cout<<result<<" ";
    return 0;
}