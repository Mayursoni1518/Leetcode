class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size() ;
        long long  ans = 0 ; 
        int i = 0 ;
        for(int j = 0 ; j < n ; j++) {
            if(s[j] == '0') {
                swap(s[i] , s[j]) ;
                ans += (j -i) ;
                i++ ;
            }
        }
        return ans ;
    }
};