class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0 ;
        int j = 0 ;
        int n = s.size() ;
        int ans = 0 ;
        vector<int>vec(3,0) ;
        while(j < n ) {
           char ch = s[j] ;
           vec[ch - 'a']++ ;
            while(vec[0] > 0 && vec[1] > 0 && vec[2] >0 ) {
                ans += n - j ; 
                vec[s[i] - 'a']--;
                i++ ;

            }
            j++; 

        }
        return ans ;
    }
};