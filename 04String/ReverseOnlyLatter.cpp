class Solution {
public:
    bool isLetter(char c) {
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
    }
    
    string reverseOnlyLetters(string s) {
        int start = 0;
        int end = s.size() - 1;
        
        while (start < end) { 
            if (isLetter(s[start]) && isLetter(s[end])) {
                swap(s[start], s[end]);
                start++;
                end--;
            } else if (!isLetter(s[start])) {
                start++;
            } else {
                end--;
            }
        }
        
        return s;
    }
};
