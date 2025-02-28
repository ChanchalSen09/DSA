#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
     vector<int>arr={1,2,3,4,5,6,7,8,9,10};
     for(int i=0;i<arr.size();i++){
        for(int j = i;j<arr.size();j++){
            cout<<"{ "<<arr[i]<<", "<<arr[j]<<" }"; 
        }
        cout<<endl;
     }
       for(int i=arr.size()-1;i>-1;i--){
        for(int j = i;j>-1;j--){
            cout<<"{ "<<arr[i]<<", "<<arr[j]<<" }"; 
        }
        cout<<endl;
     }
    return 0;
}