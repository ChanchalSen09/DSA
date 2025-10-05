#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>arr={0,1,0,1,0,1,2,56,41,154,5,1,0,01,0,1,0,1};
    int zero = 0;
    int one = 0;
    for(int i = 0; i<arr.size();i++){
        if(arr[i]==0){
            zero++;
        }
        else if (arr[i]==1){
            one++;
        }
    }
    cout<<zero << " "<<one<<endl;
    return 0;
}