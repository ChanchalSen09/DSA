#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void Sort(vector<int>& arr, int size){
    int start  = 0;
    int end = size-1;

    while(start<end){
        if(arr[start]==0){
            start++;
        }else if(arr[end]==1){
            end--;
        }else{
            swap(arr[start++],arr[end--]);
        }
    }
}
int main()
{
     vector<int>arr = {0,1,0,0,1,0,1,0,0,1};
     int size = arr.size();
     Sort(arr, size);
     for(int i : arr){
        cout<<i<<" ";
     }
    return 0;
}