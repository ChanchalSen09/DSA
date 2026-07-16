#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans(0);
        int i = 0;
        int j = 0;
        int size = arr1.size();
        int size2 = arr2.size();
        while(i<size&&j<size2){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr2[j]<arr1[i]){
                j++;
            }else{
                if(ans.empty()||ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
      return ans;
    }
};

int main() {

    Solution obj;

    vector<int> arr1 = {1,2,2,3,4};
    vector<int> arr2 = {2,2,4,6};

    vector<int> ans = obj.intersection(arr1, arr2);

    cout << "Intersection: ";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}