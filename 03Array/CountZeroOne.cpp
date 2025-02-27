#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>arr={0,1,0,1,0,1,2,56,41,154,5,1,0,01,0,1,0,1};
    int Zero=0;
    int One=0;
    for(int i:arr){
   if(i==0){
    Zero++;
   }else if(i==1){
    One++;
     }
    }
cout<<"Zero : "<<Zero<<" "<<"One : "<<One<<endl;
    return 0;
}