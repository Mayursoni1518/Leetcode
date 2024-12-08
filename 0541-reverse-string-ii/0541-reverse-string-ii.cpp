class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for (int i = 0; i < n; i += 2 * k) { // Jumping 2k characters
            int start = i;
            int end =
                min(i + k - 1,
                    n - 1); // Handle cases where less than k characters remain
            while (start < end) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};