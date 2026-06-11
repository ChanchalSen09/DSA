#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selectionSort(vector<int>&arr,int n){
    int min;
    for(int i = 0;i<n;i++){
        min = i;
        for(int j = i;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    return;
}
void BubbleSort(vector<int>&arr,int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }
    return;
}
int main()
{
    vector<int>arr={13,46,24,52,20,9};
    int n = arr.size();
    selectionSort(arr,n);
    BubbleSort(arr,n);
    for(int a : arr){
        cout<<a<<" ";
    }
    return 0;
}