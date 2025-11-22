#include<iostream>
#include<algorithm>
using namespace std;
void PermutationofString(string str,int index){
    if(index>=str.length()){
        cout<<index<<" : "<<str<<" "<<endl;
        return;
    }
    for(int j = index;j<str.length();j++){
        swap(str[index],str[j]);
        PermutationofString(str,index+1);
        swap(str[index],str[j]);
    }
}
int main()
{
     string str = "abcd";
     int index = 0;
     PermutationofString(str,index);
      return 0;
}