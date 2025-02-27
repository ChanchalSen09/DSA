#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
     vector<int>arr={12,-655,12,54,354,14,2415,21,412,54,2154,2154,13246,1324,3165,314364};
     int Min = INT_MAX;
     int Max = INT_MIN;
     for(int i:arr){
        if(i>Max){
Max = i;
        }else if(i<Min){
Min = i;
        }
     }
     cout<<"Min : "<<Min<<" "<<"Max :"<<Max<<endl;

    return 0;
}