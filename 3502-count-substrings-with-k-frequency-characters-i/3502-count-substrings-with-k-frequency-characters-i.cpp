class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n = s.size() ; 
        int i = 0 ;
        int j = 0 ;
        int ans = 0 ; 
        unordered_map<char,int>mp ;
        while(j < n ) {
            mp[s[j]]++ ;
            while(true) {
                bool ok = false ; 
                for(auto& i : mp ) {
                    if(i.second >= k ) {
                        ok = true ;
                        break ; 
                    }
                }
                if(!ok ) {
                    break ; 
                }
                ans += n - j ; 
                mp[s[i]]-- ;
                i++ ; 
            }
            j++ ; 
        }
        return ans ;
    }
};