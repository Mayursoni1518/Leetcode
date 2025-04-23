class Solution {
public:
    string removeStars(string s) {
        stack<char>st ;
        for(auto c: s) {
            if(c == '*'){
                if(!st.empty()){
                    st.pop() ;
                }
            }
            else{
                st.push(c) ;
            }
        }

        string result ;
        while(!st.empty())
        {
            result += st.top() ;
            st.pop() ; 
        }
        reverse(result.begin() , result.end()) ;
        return result ; 
    }
};