class Solution {
public:
    bool cheak(int i, int j, string& str) {
        while (i <= j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int maxi = INT_MIN;
        string ans = "";
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (cheak(i, j, s)) {
                    if (j - i + 1 > maxi) {
                        maxi = j - i + 1;
                        ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return ans;
    }
};
