class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
      int n = s1.size() ;
      int m = s2.size() ;
      
      if(n != m) return false ;
      int cnt = 0 ;
      for(int i = 0 ; i < n ; i++ ) {
        if(s1[i] != s2[i]){
            cnt++ ; 
        }
      }   

      sort(s1.begin() , s1.end()) ;
      sort(s2.begin() , s2.end() ) ;
      if(s1 != s2) return false ; 
      return cnt <= 2 ;
    }
};