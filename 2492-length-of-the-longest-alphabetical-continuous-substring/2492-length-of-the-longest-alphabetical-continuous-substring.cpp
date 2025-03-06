class Solution {
public:
    int longestContinuousSubstring(string s) {
        \
        int j = 0 ;
        int n = s.size() ; 
        int cnt = 1 ;
        int maxi = 1; 
        while(j < s.size() - 1  )  {
            if(s[j] + 1 == s[j+1]) {
                cnt++ ;
                maxi = max(maxi , cnt ); 
            }
            else{
                cnt = 1; 
               
            }
            j++ ; 
        }
        return  maxi ; 
    }
};