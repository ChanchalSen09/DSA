#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> union(vector<int>& arr1, vector<int>& arr2) {
    vector<int>ans;
    int size = arr1.size();
    int size2 = arr2.size();
    int start = 0;
    int secondStart =0;
    while(start<size&&secondStart<size2){
    if(arr1[start]<arr2[secondStart]){
       if( ans.empty() || ans.back()!=arr1[start]){
          ans.push_back(arr1[start]); 
       }
        
        start++;
    }else if (arr2[secondStart]<arr1[start]){
        if(ans.empty() || ans.back()!=arr2[secondStart]){
                   ans.push_back(arr2[secondStart]); 
        }
        secondStart++;
    }else{
            if( ans.empty() || ans.back()!=arr1[start]){
          ans.push_back(arr1[start]); 
       }
       start++;
       secondStart++;
    }         
    }
    while(secondStart<size2){
        if(ans.empty() || ans.back()!=arr2[secondStart]){
                   ans.push_back(arr2[secondStart]); 
        }
        secondStart++; 
    }
    while(start<size){
            if( ans.empty() || ans.back()!=arr1[start]){
          ans.push_back(arr1[start]); 
       }
        
        start++;
    }
    return ans;
    };
};

int main() {

    Solution obj;

    vector<int> arr1 = {1,2,2,3,4};
    vector<int> arr2 = {2,2,4,6};

    vector<int> ans = obj.union(arr1, arr2);

    cout << "union: ";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
} 
