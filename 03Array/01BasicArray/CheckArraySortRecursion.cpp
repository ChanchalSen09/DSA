#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int> &arr, int start) {
    if (start >= arr.size() - 1) 
        return true;

    if (arr[start] > arr[start + 1]) 
        return false;

    return isSorted(arr, start + 1);
}

int main() {
    vector<int> arr = {1, 2, 6, 4, 5};

    if (isSorted(arr, 0)) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
