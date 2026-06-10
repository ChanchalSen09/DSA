#include<iostream>
#include<algorithm>
using namespace std;
void square(int n){
    for(int  i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
void triangle(int n){
    for(int  i = 0;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void Number_triangle(int n){
    for(int  i = 0;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void Number_triangle1(int n){
    for(int  i = 0;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void Inverted_triangle(int n){
    for(int i = n;i>0;i--){
        for(int j = i; j>0;j--){
            cout<<" * ";
        }
        cout<<endl;
     }
}
void Inverted_triangle_num(int n){
    for(int i = n;i>=0;i--){
        for(int j = 1; j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
     }
}
void Pyramid(int n){
    for (int i = 0;i<n;i++){
        for(int space = 0;space<n-i-1;space++){
            cout<<" ";
        }
        for(int j = 0; j < 2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void InvertedPyramid(int n){
    for (int i = 0;i<n;i++){
        for(int space = 0;space<i;space++){
            cout<<" ";
        }
        for(int j = 0; j <2*(n-i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void Diamond(int n){
    for(int i = 0;i<2*n;i++){
     for(int j = 0;j<2*n;j++){
        cout<<"*";
      }
      cout<<endl;
    }
}
int main()
{
     int n = 5;
    //  square(n);
    // triangle(n);
    // Number_triangle(n)
    // Number_triangle1(n);
    // Inverted_triangle(n);
    // Inverted_triangle_num(n);
    // Pyramid(n);
    // InvertedPyramid(n);
    Diamond(n);

    return 0;
}