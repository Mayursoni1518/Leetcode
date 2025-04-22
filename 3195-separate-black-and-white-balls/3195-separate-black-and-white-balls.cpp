class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size() ;
        int left = 0 ;
        long long ans = 0 ; 
        for(int right = 0 ; right < n ; right++ ){
            if(s[right] == '0' ) {
                swap(s[left], s[right]);
                ans += (right - left) ;
                left++ ; 
            }
        }
        return ans ;
    }
};