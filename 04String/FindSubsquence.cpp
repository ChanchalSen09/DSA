#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void PrintSubsquence(string ans,string output,int index){
 while(index>=ans.length()){
    cout<<output<<endl;
    return;
 }

 output.push_back(ans[index]);
 PrintSubsquence(ans,output,index+1);
 output.pop_back();
 PrintSubsquence(ans,output,index+1);


}
int main()
{   
    string w= "abc";
    string output = "";
    PrintSubsquence(w,output,0);
    return 0;
}