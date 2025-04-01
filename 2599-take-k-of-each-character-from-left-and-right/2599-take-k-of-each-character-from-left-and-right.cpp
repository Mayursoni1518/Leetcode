class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.size(); 
        unordered_map<char,int>mp ;
        for(auto& i : s ) {
            mp[i]++ ; 
        }
        int maxi = 0 ; 
        int i = 0 ;
        if(mp['a'] < k || mp['b'] < k || mp['c'] < k ) return -1  ;
        int j = 0 ;
        while(j < n ) {
            mp[s[j]]-- ;

            while(i <= j && mp['a'] < k || mp['b'] < k || mp['c'] < k ) {
                mp[s[i]]++ ;
                i++ ; 
            }
            maxi = max(maxi , j - i + 1) ;
            j++ ; 
        }
        return n - maxi ; 
    }
};