class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int cnt = 0 ; 
        for (int i = 0; i < n / 2; i++) {
            char ch = tolower(s[i]) ; 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
                ch == 'u') {
                cnt++;
            }
        }
        for (int i = n / 2; i < n; i++) {
            char ch = tolower(s[i]) ; 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
                ch == 'u') {
                cnt--;
            }
        }
        return cnt == 0 ? 1 : 0 ; 
    }
};