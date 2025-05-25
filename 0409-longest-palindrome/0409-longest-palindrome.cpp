class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int sum = 0;

        for (auto& i : s) {
            mp[i]++;
        }

        bool valid = true;
        for (auto& i : mp) {
            if (i.second % 2 != 0) {
                if (valid) {
                    sum += i.second;
                    valid = false;
                } else {
                    sum += i.second - 1; // add only even part
                }
            } else {
                sum += i.second;
            }
        }

        return sum;
    }
};
