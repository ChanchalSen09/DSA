#include<iostream>
#include<algorithm>
using namespace std;
void PrintHolloe_Square_Pattern(int n){
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==0||i==(n-1)||j==0||j==(n-1)){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
 }
}

int main()
{
     PrintHolloe_Square_Pattern(8);
    return 0;
}