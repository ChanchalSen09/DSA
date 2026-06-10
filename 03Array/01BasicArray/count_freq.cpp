#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    pair<int, int> findHighestFrequency(vector<int>& arr) {
        unordered_map<int,int>freq;
        pair<int,int>ans;
        for(int i :arr){
            freq[i]++;
        }
        int maxfreq = INT_MIN;
        
        for(auto a : freq){
         if(a.second>maxfreq){
            maxfreq = a.second;
            ans.first=a.first;
         }
       }
      int minfreq = INT_MAX;
        
        for(auto a : freq){
         if(a.second<maxfreq){
            maxfreq = a.second;
            ans.second=a.first;
         }
       }
       return ans;

    }
};

int main() {
    vector<int> arr = {2,2,3,4,4,2};

    Solution obj;
    pair<int, int> ans = obj.findHighestFrequency(arr);

    cout << ans.first << " " << ans.second << endl;

    return 0;
}