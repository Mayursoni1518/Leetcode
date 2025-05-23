class Solution {
public:
    bool isPalindrome(int x) {
        int org = x ;
        long long sum  = 0 ; 
        if(x < 0 ) return false ;
        while(x != 0 ) {
            int temp = x % 10 ;
            sum = sum * 10 + temp ;
            x /= 10 ;
        }

        if(org == sum) return true ;
        return false ;
    }
};