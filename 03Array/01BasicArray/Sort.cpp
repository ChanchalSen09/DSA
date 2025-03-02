#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void SortMinus(vector<int>&arr,int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        if(arr[start]<0){
            start++;
        }else if(arr[end]>=0){
            end--;
        }else {
            swap(arr[start++],arr[end--]);
        }
    }
}
int main()
{
     vector<int>arr={-1,0,-1,0,3,-4,0,4,6,-1,3,-1,-4,-3,1,-1};
     int size = arr.size();
     SortMinus(arr,size);  
     for(int i : arr){
        cout<<i<<" ";
     }
     sort(arr.begin(),arr.end());  
    cout<<endl;
     for(int i : arr){
        cout<<i<<" ";
     }
     return 0;
}