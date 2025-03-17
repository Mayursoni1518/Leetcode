class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int i = 0;
        int j = 0;
        int ans = 0;
        int countZ = 0;
        int countO = 0;
        int n = s.size();
        while (j < n) {
            if (s[j] == '0')
                countZ++;
            if (s[j] == '1')
                countO++;
            while (countZ > k && countO > k) {
                if (s[i] == '0')
                    countZ--;
                if (s[i] == '1')
                    countO--;
                i++;
            }
            ans += (j - i + 1);
            j++;
        }
        return ans;
    }
};