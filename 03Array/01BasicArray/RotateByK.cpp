#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Problem: Rotate Array by K

Given an integer array nums and an integer k, rotate the array by k steps.

You can assume k can be greater than the size of the array.
Modify the array in place.
*/

void rotateByK(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) {
        return;
    }

    k %= n;
    if (k == 0) {
        return;
    }

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotateByK(nums, k);

    for (int value : nums) {
        cout << value << " ";
    }

    return 0;
}
