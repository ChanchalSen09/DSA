#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void Extream(vector<int>&arr,int size){
    vector<int>result(size);
    int start = 0;
    int end = size-1;
    int i = 0;
    while(start<end){
        result[i++]=arr[start++];
        result[i++]=arr[end--];
    }
for(int i =0; i<result.size();i++){ //double free or corruption (!prev) in for of loop it give error 
//Aborted (core dumped) 
   arr[i]=result[i];
}
}
int main()
{  
   vector<int> arr={1,2,3,4,5,6,7,8,9,10};
 //1,10,2,9,3,8,4,7,5,6
   int size = arr.size();
   int start  = 0;
   int end = size-1;
   Extream(arr,size);
   for(int i:arr){
    cout<<i<<" ";
   }
   cout<<endl;   
    return 0;
}