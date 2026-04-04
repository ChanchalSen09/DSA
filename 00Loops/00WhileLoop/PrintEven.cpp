#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr={};
    while(n>0){
        if(n%2==0){
        arr.push_back(n);
        }
        n--;
    }
    reverse(arr.begin(),arr.end());
    for (int i :arr){
        cout<<i<<" ";
    }
    return 0;
}