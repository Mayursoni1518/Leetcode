class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1) return 1 ;
        if(n == 0) return 0 ;
        if(n % 4 == 0 ){
            return isPowerOfFour(n/4) ;
        }
        else{
            return false; 
        }
    }

};