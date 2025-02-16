class Solution {
public:
    double myPow(double x, int n) {
      if(n == 0 ) return 1 ;

      long long pow = n  ;
      if(pow < 0) {
        x = 1 / x ;
        pow = -pow ; 
      }

      double ans = myPow(x,pow/2) ;

      if(n % 2 == 0 ) {
        return ans * ans ; 
      }

      return x * ans * ans ; 
    }
};