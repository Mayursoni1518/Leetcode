class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int>mp ;
        int n = s.size() ;
        int i = 0 ;
        int j = 0 ;
        int cnt = 0 ;
        while(j < n ) {
            mp[s[j]]++ ; 
            while(j - i + 1 == 3) {
                if(mp.size() == 3) {
                    cnt++ ; 
                }
                mp[s[i]]-- ;
                if(mp[s[i]] == 0 ) {
                    mp.erase(s[i]) ; 
                }
                i++ ; 
            }
            j++ ;
        }
        return cnt ;
    }
};