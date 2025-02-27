#include<iostream>
#include<vector>
using namespace std;

int main()
{ 
    vector<int>arr={1,5,6,7,9,40,41,20};
    int sum = 0;
    for(int n:arr){
      sum+=n;
    }   
    cout<<sum<<endl;;
    return 0;
}