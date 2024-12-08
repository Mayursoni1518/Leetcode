class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans;

        // While there are characters left to add
        while (a > 0 || b > 0) {
            // Check the last two characters to avoid "aaa" or "bbb"
            bool addA = false;
            int len = ans.size();
            if (len >= 2 && ans[len - 1] == ans[len - 2]) {
                if (ans[len - 1] == 'b') {
                    addA = true; // Avoid "bbb", so add 'a'
                }
                // Otherwise, addA remains false to avoid "aaa"
            } else {
                // Add the character with the higher count
                addA = (a >= b);
            }

            // Add the chosen character
            if (addA) {
                ans.push_back('a');
                a--;
            } else {
                ans.push_back('b');
                b--;
            }
        }

        return ans;
    }
};
