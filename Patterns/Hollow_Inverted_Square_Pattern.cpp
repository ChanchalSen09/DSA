#include<iostream>
#include<algorithm>
using namespace std;
void Print_Hollow_Square_Inverted_Pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(j==n-i-1||j==0||i==0){
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
     Print_Hollow_Square_Inverted_Pattern(10);
    return 0;
}
