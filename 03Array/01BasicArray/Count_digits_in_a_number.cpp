#include<iostream>
#include<algorithm>
using namespace std;
int counter(int n){
    int counter = 0;
    while(n>0){
        n = n/10;
        counter++;
    }
    return counter;
}
int main()
{
     int j = 1254948585;
    int result =  counter(j);
    cout<<result;
    return 0;
}