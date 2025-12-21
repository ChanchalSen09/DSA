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
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
      int n = 5;
      for(int i = 0;i<n;i++){
          //space 
          for(int m = 0;m<n-i-1;m++){
              cout<<" ";
          }
          for(int j=0;j<2*i+1;j++){
              cout<<"*";
      }         for(int m = 0;m<n-i-1;m++){
              cout<<" ";
          }
      
      cout<<endl;
      }
    return 0;
}
void Hollow_Diamond_Pattern(int n){
   for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            if (j == n - i - 1 || j == n + i - 1) 
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;
    }


    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < 2 * n - 1; j++) {
            if (j == n - i - 1 || j == n + i - 1) 
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{   
    // FullPyramid(6);
    Hollow_Diamond_Pattern(5);
    return 0;
}