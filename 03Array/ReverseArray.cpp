#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void reverse(vector<int>&arr,int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}
int main()
{  
   vector<int> arr={10,9,8,7,6,5,4,3,2,1,0};
   int size = arr.size();
   reverse(arr,size);
   for(int i:arr){
    cout<<i<<" ";
   }
   cout<<endl;   
    return 0;
}