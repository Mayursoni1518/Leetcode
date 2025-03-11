class Solution {
public:
    int characterReplacement(string s, int k) {
        int result = 0 ;
        int i = 0 ;
        int j = 0 ;
        int n = s.size() ; 
        int maxFreq = 0 ;
        unordered_map<char , int>mp ; 
        while(j < n ) {
            mp[s[j]]++ ;
            maxFreq=  max(maxFreq, mp[s[j]]) ;

            while(((j - i + 1) - maxFreq ) > k ) {
                mp[s[i]]--;
                i++ ; 
            }
            result = max(result , j - i + 1) ; 
            j++ ; 
        }
        return result ; 
    }
};