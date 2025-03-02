// Question:
// You are given an array nums containing n objects colored red, white, or blue, represented by 0, 1, and 2, respectively. You need to sort the array in-place so that objects of the same color are adjacent, with the colors in the order red (0), white (1), and blue (2).

// Example 1:
// Input: nums = [2, 0, 2, 1, 1, 0]  
// Output: [0, 0, 1, 1, 2, 2]  

// Example 2:
// Input: nums = [2, 0, 1]  
// Output: [0, 1, 2]  
// Constraints:

// n == nums.length
// 1 <= n <= 300
// nums[i] is 0, 1, or 2.
// Can you solve it in O(n) time complexity and O(1) space complexity?

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Dutch Nation Flag Algorithm
void SortColor(vector<int>&nums){
    int start = 0;
    int end = nums.size()-1;
    int index = 0;
    while(index<=end){
        if(nums[index]==0){
            swap(nums[index++],nums[start++]);
        }else if (nums[index]==1){
            index++;
        }else{
            swap(nums[end--],nums[index]);
        }
    }
}
int main()
{
      vector<int>arr = {2, 0, 2, 1, 1, 0};
      SortColor(arr);
      cout<<endl;
      for(int i : arr){
        cout<<i<<", ";
      }
      cout<<endl;
    return 0;
}