class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0 ;
        int j = 0 ;
        int n = s.size() ;
        int ans = 0 ;
        unordered_map<int,int>mp ; 
        while(j < n ) {
            mp[s[j]]++ ;

            while(mp[s[j]] > 1) {
                mp[s[i]]--;
                i++ ;
            }
            ans = max(ans , j - i + 1) ; 
            j++;
        } 
        return ans ; 
    }
};