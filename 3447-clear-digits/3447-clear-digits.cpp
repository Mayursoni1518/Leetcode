class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                st.push(s[i]);
            } else {
                if (!st.empty()) {
                    st.pop();
                }
            }
        }
        string result ;

        while(!st.empty()){
            result += st.top() ;
            st.pop() ;
        }

        reverse(result.begin() , result.end()) ;
        return result ;
    }
};