class Solution {
public:
    int countDigits(int num) {
        int original = num ; 
        int ans = 0 ; 
        while(num != 0 ) {
            int temp = num % 10 ;
            if(original % temp ==  0 ){
                ans++ ;
            }
            num /= 10 ; 
        }
        return ans ;
    }
};