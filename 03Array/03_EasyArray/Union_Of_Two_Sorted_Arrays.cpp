/*
Problem: Union of Two Sorted Arrays

Given two sorted arrays, `arr1` and `arr2` of size `n` and `m`,
find the union of the two arrays.

The union of two arrays can be defined as the common and distinct
elements in the two arrays.

Note:
- Elements in the union should be in ascending order.

Example 1:
Input:
n = 5, m = 5
arr1[] = {1, 2, 3, 4, 5}
arr2[] = {2, 3, 4, 4, 5}
Output:
{1, 2, 3, 4, 5}

Example 2:
Input:
n = 10, m = 7
arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
arr2[] = {2, 3, 4, 4, 5, 11, 12}
Output:
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> unionArray(vector<int>& arr1, vector<int>& arr2) {
    vector<int> ans;
    int start = 0;
    int start2 = 0;

    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5};

    vector<int> ans = unionArray(arr1, arr2);

    for (int value : ans) {
        cout << value << " ";
    }

    return 0;
}
