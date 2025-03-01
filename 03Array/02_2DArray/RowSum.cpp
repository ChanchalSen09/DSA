#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};
 //Row Wise Access
  for(int i = 0;i<arr.size();i++){
    int sum = 0;
    for(int j = 0;j<arr.size();j++){
        cout<<arr[i][j]<<", ";
        sum+=arr[i][j];
    }
    cout<<" : "<<sum<<" "; cout<<endl;
  }cout<<endl;
//   //Column Wise Access
//     for(int i = 0;i<arr.size();i++){
//     for(int j = 0;j<arr.size();j++){
//         cout<<arr[j][i]<<",";
//     }cout<<endl;
    return 0;}
