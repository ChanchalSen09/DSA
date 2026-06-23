#include<iostream>
#include<vector>
using namespace std;

/*
Problem: Left Rotate the Array by One

Given an integer array nums, rotate the array to the left by one.

Note: There is no need to return anything, just modify the given array.
*/

void leftRotateByOne(vector<int>& nums) {
    int size = nums.size();
    int firstNum = nums[0];
    for(int  i = 1;i<nums.size();++i){
        nums[i-1] = nums[i];
    }
    nums[size-1] = firstNum;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    leftRotateByOne(nums);

    for (int value : nums) {
        cout << value << " ";
    }

    return 0;
}
