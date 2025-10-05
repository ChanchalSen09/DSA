#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void ReOrder(vector<int>& nums, int size){
      int start = 0;
      int end = size - 1;
      int index = 0;
      while(index<=end){
        if(nums[index]>=0){
            swap(nums[index++],nums[start++]);
        }else {
            swap(nums[index],nums[end--]);
        }
    }
}
int main()
{
     vector<int>arr = {12,10,10,-1,25,-25,-1,24,-1,1,-1,-2,1,0};
     int size = arr.size();
     ReOrder(arr,size);
     for(int i : arr){
        cout<<i<<" ";
     }
    return 0;
}