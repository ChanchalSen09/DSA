#include <bits/stdc++.h>
using namespace std;

vector<int> buildPrefixSum(const vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i <= n; i++) {
      prefix[i]=prefix[i-1]+arr[i];
    }

    return prefix;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int> prefix = buildPrefixSum(arr);
    for (int a : prefix){
        cout<<a<<" ";
    }

    return 0;
}