class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // cout << s << endl;
        // cout << t << endl;

        if (s.size() != t.size()) //edge Case For Not Same Size 
            return false;
        // for (int j = 0; j < t.size(); j++) {
            // if (s[j] != t[j])
                // return false;
        // }
       

       //using Array Mapping 

        vector<int>arr(26,0);    // 'a' ki ASCII Value 67 hoti he 
        for(int i = 0;i<s.size();i++){ 
            arr[s[i]-'a']++; 
            arr[t[i]-'a']--;
        }
        for(int k:arr){
            if(k!=0)return false;
        }
        return true;
    }
};