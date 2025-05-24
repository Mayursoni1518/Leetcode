class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0 ;
        string result = "" ; 
        int i = 0 ;
        while(i < s.size() ) {
            if(s[i] == '(' ) {

                if(cnt > 0 ) {
                    result += s[i] ; 
                }
                cnt++ ; 
            }
            else {
                cnt-- ;
                if(cnt > 0 ) {
                    result += s[i] ; 
                }
            }
            i++ ; 
        }
        return result ; 
    }
};