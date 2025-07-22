class Solution {
public:
    string makeGood(string s) {
        stack<char>st ;
        int i = 0 ;
        while(i < s.size() ) {
            if(!st.empty() && abs(st.top() - s[i]) == 32 ){
              st.pop() ;
            }
            else{
                st.push(s[i]) ; 
            }
            i++ ;
        }
        string res ; 
        while(!st.empty()) {
            res += st.top() ;
            st.pop();
        }
        reverse(res.begin() , res.end()) ;
        return res ; 
    }
};