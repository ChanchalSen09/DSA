#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FindPivot(vector<int>arr,int size){
    int start = 0;
    int end = size;
    int mid = start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }else {
            end = mid;
        }mid = start+(end-start)/2;
    }
    return mid;
}
int main()
{
    vector<int>arr={1,2,8,4,5,6};
    int result = FindPivot(arr,arr.size()-1);
    cout<<result<<endl;

    return 0;
}