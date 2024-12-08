class Solution {
public:
    string reverseOnlyLetters(string s) {
        int st = 0; 
        int end = s.size() - 1;

        while(st < end) {
            if(isalpha(s[st]) && isalpha(s[end])) {
                swap(s[st], s[end]);
                st++;
                end--; 
            }
            else if(!isalpha(s[st])) { // Skip non-alphabetic characters
                st++; 
            }
            else { // Skip non-alphabetic characters at the end
                end--; 
            }
        }
        return s; 
    }
};
