class Solution {
public:
    int differenceOfSums(int n, int m) {
        int cnt1 = 0 ;
        int cnt2 = 0 ;
        for(int i = 1 ; i <= n ; i++ ){
            if(i % m != 0 ) {
                cnt1 += i ;
            }
            else if (i % m == 0){
                cnt2 += i  ;
            }
        }
        return cnt1 - cnt2;
    }
};