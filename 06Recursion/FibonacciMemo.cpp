#include <bits/stdc++.h>
using namespace std;
vector<long long> memo;

long long fibonacci_memo(int n) {
    if (n <= 1) {
        return n;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = fibonacci_memo(n - 1) + fibonacci_memo(n - 2);
    return memo[n];
}

int main() {
    int n;
   cout << "Enter the number of Fibonacci terms to display: ";
   cin >> n;

    if (n < 0) {
       cout << "Invalid input. Please enter a non-negative integer." <<endl;
    } else {
        memo.assign(n + 1, -1);
        for (int i = 0; i < n; ++i) {
           cout << fibonacci_memo(i) << " ";
        }
       cout <<endl;
    }

    return 0;
}
