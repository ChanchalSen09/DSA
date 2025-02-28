#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void SortZeroOne(vector<int>&arr,int size){
    int start = 0;
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
     vector<int>arr={0,0,1,1,0,1,0,1,0,1,0};
     int size = arr.size();
     SortZeroOne(arr,size);
     for(int i : arr){
        cout<<i<< " ";
     }

    return 0;
}