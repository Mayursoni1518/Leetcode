class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size() ;
        int i = 0 ;
        int ans = INT_MIN ;
        int maxi = INT_MIN;
        int j = 0 ;
        unordered_map<char,int>mp ;
        while(j < n ) {
            mp[s[j]]++ ; 
            maxi = max(maxi , mp[s[j]]);
            while(((j - i + 1) - maxi) > k  ){
                mp[s[i]]--;
                i++ ; 
            }
            ans = max(ans , j - i + 1) ;
            j++ ;
        }
        return ans ;
    }
};