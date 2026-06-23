#include<iostream>
#include<vector>
using namespace std;

/*
Problem: Remove Duplicates in-place from Sorted Array

Given an integer array sorted in non-decreasing order, remove the duplicates
in place such that each unique element appears only once. The relative order
of the elements should be kept the same.

Return the number of unique elements `k`, where the first `k` positions of the
array store the final answer.
*/

int removeDuplicates(vector<int>& arr) {
   int unique = 0;

   for(int i = 0;i<arr.size();i++){
    if(arr[i]!=arr[unique]){
        unique++;
        arr[unique]=arr[i];
    }
   }
    return unique+1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3};

    int k = removeDuplicates(arr);
    cout << k << endl;

    return 0;
}
