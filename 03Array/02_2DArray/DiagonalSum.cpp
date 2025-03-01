#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};
int sum = 0; //Row Wise Access
  for(int i = 0;i<arr.size();i++){
    
    for(int j = 0;j<arr.size();j++){
       if(i==j){
         cout<<arr[i][j]<<", ";
        sum+=arr[i][j];
       }
       
    }
 
  }

    cout<<" : "<<sum<<" "; cout<<endl;   return 0;}
