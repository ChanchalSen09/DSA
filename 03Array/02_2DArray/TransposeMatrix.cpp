#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Transpose(vector<vector<int>>&arr,int row,int col){
    for(int i = 0;i<row;i++){
        for(int j = i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main()
{
  vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};
 //Row Wise Access
  for(int i = 0;i<arr.size();i++){
    int sum = 0;
    for(int j = 0;j<arr.size();j++){
        cout<<arr[i][j]<<", ";
        // sum+=arr[i][j];
    }
  cout<<endl;
  }cout<<endl;
  Transpose(arr,3,3);
  //Column Wise Access
    for(int i = 0;i<arr.size();i++){
    for(int j = 0;j<arr.size();j++){
        cout<<arr[j][i]<<", ";
    }cout<<endl;}
    return 0;
}
