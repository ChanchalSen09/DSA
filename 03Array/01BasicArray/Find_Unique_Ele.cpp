#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int FindUnique(vector<int>arr,int size){
    int number =0; 
    for(int i : arr){
    number^=i;
    }
    return number;
}
int main()
{
     vector<int>arr={1,2,3,4,5,6,1,3,4,2,5};
     int size = arr.size();
     int unique = FindUnique(arr,size);
     cout<<"Unique Element : "<<unique<<endl;
     return 0;
}