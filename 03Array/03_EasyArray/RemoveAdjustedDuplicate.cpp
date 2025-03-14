class Solution {
public:
    string removeDuplicates(string s) {
        string J = "";
        for (int i = 0; i < s.size(); i++) {
            if (!J.empty() && J.back() == s[i]) {
                J.pop_back();
            } else {
                J.push_back(s[i]);
            }
        }
        return J;
    }
};