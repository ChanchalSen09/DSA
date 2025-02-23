#include<iostream>
#include<algorithm>
using namespace std;
// void FullPyramid(int n){
//     for(int i = 0;i<n;i++){
//         int k = 0;
//         for(int j = 0;j<(n*2)-1;j++){
//             if(j<(n-1)-i){
//                 cout<<" ";
//             }else if(k<2*i+1){
//             cout<<"*";
//             k++;
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
void Hollow_Pyramid(int n){
    for(int i = 0;i<n;i++){
        int k = 0;
        for(int j = 0;j<(n*2)-1;j++){
            if(j<(n-1)-i){
                cout<<" ";
            }else if(k<2*i+1){
             if(k==0||k==2*i ||i==n-1){ // Last Line Handle on that Case i==n-1; 
                cout<<"*";}
                else{
                    cout<<" ";
                }
            k++; 
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{   
    // FullPyramid(6);
     Hollow_Pyramid(5);
    return 0;
}