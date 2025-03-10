#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void BubbleSort(vector<int>&arr,int size){
 for(int i = 0;i<size-1;++i){
    for(int j = 0;j<size-i-1;++j){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
 }
}
int main()
{
     vector<int>arr={25,64,45,21,23,10,2,8,9,1,0};
     int size = arr.size();
     BubbleSort(arr,size);
     cout<<endl;
    
     for(int i : arr){
        cout<<i<<" ,";
     }
     cout<<endl;

    return 0;
}