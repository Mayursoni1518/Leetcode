class Solution {
public:
    int ans(int a , int b) {
        while(b != 0 ){
            int temp = b ; 
            b = a % b ;
            a = temp ;
        }
        return a;
    }
    int gcdOfOddEvenSums(int n) {
        int sume = 0 ;
        int sumo = 0 ;
        for(int i = 0 ; i <= n * 2  ; i++) {
            if(i % 2 == 0 ) 
            {
                sume += i ; 
            }
            else{
                sumo += i ; 
            }
        }
        return ans(sume , sumo) ;
    }
};