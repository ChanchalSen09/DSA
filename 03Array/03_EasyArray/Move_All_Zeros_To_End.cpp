#include<iostream>
#include<vector>
using namespace std;

/*
Problem: Move all Zeros to the End of the Array

You are given an array of integers. Move all zeros in the array to the end
and move all non-zero integers to the front while maintaining their order.

Example 1:
Input:  1, 0, 2, 3, 0, 4, 0, 1
Output: 1, 2, 3, 4, 1, 0, 0, 0

Example 2:
Input:  1, 2, 0, 1, 0, 4, 0
Output: 1, 2, 1, 4, 0, 0, 0
*/

void moveZerosToEnd(vector<int>& nums) {

    int start = 0;
    int end = nums.size()-1;
    while(start<end){
        if(nums[start]==0 && nums[end]!=0){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }else if(nums[end]==0){
            end--;

        }else if(nums[start]!=0){
            start++;
        }
    }
}

int main() {
    vector<int> nums = {1, 0, 2, 3, 0, 4, 0, 1};

    moveZerosToEnd(nums);

    for (int value : nums) {
        cout << value << " ";
    }

    return 0;
}
