class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        unordered_map<char, int> mp;
        for (int i = 0; i < chars.size(); i++) {
            mp[chars[i]] = vals[i];
        }

        int sum = 0;
        int maxi = 0;
        for (char ch : s) {
            int cost = mp.count(ch) ? mp[ch] : ch - 'a' + 1 ;
            sum += cost;
            maxi = max(maxi, sum);
            if (sum <= 0) {

                sum = 0;
            }
        }

        return maxi;
    }
};