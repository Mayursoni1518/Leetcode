class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word = "", result = "";
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                st.push(word);
                word = "";
            }
        }

      
        if (!word.empty()) {
            st.push(word);
        }

        
        while (!st.empty()) {
            result += st.top();
            st.pop();
            if (!st.empty()) result += " ";
        }

        return result;
    }
};