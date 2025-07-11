class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size() ;
        int i = 0 ;
        int maxi = INT_MIN ; 
        int j = 0 ;
        unordered_map<char,int>mp ; 
        while(j < n ) {
            mp[s[j]]++ ;
            while(mp[s[j]] > 1 ) {
                mp[s[i]]--; 
                i++ ; 
            }
            maxi = max(maxi , j - i + 1) ; 
            j++ ;  
        }
        return maxi == INT_MIN ? 0 : maxi  ; 
    }
};