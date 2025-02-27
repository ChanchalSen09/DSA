#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void Extream(vector<int>&arr,int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}
int main()
{  
   vector<int> arr={1,2,3,4,5,6,7,8,9,10};
 //1,10,2,9,3,8,4,7,5,6
   int size = arr.size();
int start  = 0;
int end = size-1;
while(start<end){
    cout<<arr[start++]<<" "<<",";
    cout<<arr[end--]<<","<<" ";
}
   //    Extream(arr,size);
//    for(int i:arr){
    // cout<<i<<" ";
//    }
   cout<<endl;   
    return 0;
}