#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void PrintArray(const vector<int>& arr, int index) {
    if(index == arr.size()) return;
    cout << arr[index] << ", ";
    PrintArray(arr, index + 1);
}
int main()
{
     vector<int>arr={12,35,36,4,412,65,85,452,210};
PrintArray(arr, 0);
return 0;
}