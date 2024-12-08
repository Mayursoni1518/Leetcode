class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n) ;

        int m = s.size() ;
        int sum = 0 ;
        for(int i = 0 ; i < m ; i++){
          if(i % 2 == 0 ) {
            sum += s[i] - '0' ;
          }
          else{
            sum = sum - (s[i]-'0') ;
          }
        }
        return sum ; 
    }
};