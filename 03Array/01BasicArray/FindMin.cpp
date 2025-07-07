#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{  
    vector<int>arr={0, 0, 0, 0};

    int start = 0;
    int end = arr.size()-1;
    int mid = 0;

     while(mid<=end){
        if(arr[mid]==0){
            swap(arr[mid],arr[start]);
            start++;
            mid++;
        }else if(arr[mid]==2){
            swap(arr[mid],arr[end]);  
            mid++;
            end--;
        }else if(arr[mid]==1){
            mid++;
        }
    }
    for(int i : arr){
        cout<<i<<", ";
    }
    return 0;
}