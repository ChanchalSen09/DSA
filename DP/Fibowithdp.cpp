// #include <iostream>
// using namespace std;

// int fib(int n) {
//     if (n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }

// int main() {
//     int n = 10;
//     return 0;
// }
// #include <iostream>
// #include<vector>
// using namespace std;

// int fib(int n,vector<int>&arr) {
//     if (n <= 1)
//         return n;
//     if(arr[n]!=-1) return arr[n];

//     return arr[n]= fib(n - 1,arr) + fib(n - 2,arr);
// }

// int main() {
//     int n = 5;
//     vector<int>arr(n+1,-1);
//     cout<<fib(n,arr);
//     return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n = 10;
//     int curr = 0;
//     int first = 0;
//     int second = 1;
//     for(int i = 2;i<=n;i++){
//         curr = first + second;
//         second = first;
//         first = curr;
//     }
//     cout<<curr;
//     return 0;
// }
