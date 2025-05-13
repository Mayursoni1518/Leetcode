class Solution {
public:
    int countEven(int num) {
        int cnt= 0 ;
        for(int i = 1 ; i <= num ; i++ ) {
            int num = i ;
            string s = to_string(num) ;
            int sum = 0 ; 
            for(int j = 0 ; j < s.size() ; j++ ) 
            {
                sum += s[j] ;
            }

            if(sum % 2 == 0 ) {
                cnt++ ; 
            }
        }
        return cnt ; 
    }
};