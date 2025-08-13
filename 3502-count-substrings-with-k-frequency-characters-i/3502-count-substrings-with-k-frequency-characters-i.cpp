class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n = s.size();
        int i = 0, j = 0, ans = 0;
        unordered_map<char, int> mp;

        while (j < n) {
            mp[s[j]]++;

            // Check if condition met
            while (true) {
                bool ok = false;
                for (auto &p : mp) {
                    if (p.second >= k) { 
                        ok = true; 
                        break;
                    }
                }
                if (!ok) break;

                // If valid, add all substrings starting at i and ending from j to n-1
                ans += (n - j);
                mp[s[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};
