class Solution {
public:
    int reverse(int x) {
        long long rev = 0 ;
        while(x != 0 ) {
            int temp = x % 10 ;
            rev = rev * 10 + temp ;
            x /= 10 ; 
        }
        return rev >=  pow(2,31) - 1 || rev < - pow(2,31) ? 0 : rev ; 
    }
};