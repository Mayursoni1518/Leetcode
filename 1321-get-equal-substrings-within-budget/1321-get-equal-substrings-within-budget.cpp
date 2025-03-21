class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i = 0;
        int j = 0 ;
        int count = 0 ;
        int n = s.size() ; 
        int ans = 0 ;
        while(j < n ) {
            count += abs(s[j] - t[j]) ;
            if(count > maxCost) {
                count -= abs(s[i] - t[i]);
                i++ ; 
            }
            ans = max(ans , j - i + 1) ; 
            j++ ; 
        }
        return ans ;
    }
};