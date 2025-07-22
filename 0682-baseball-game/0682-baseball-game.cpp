class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (const string& op : operations) {
            if (op == "C") {
                st.pop();
            } else if (op == "D") {
                st.push(st.top() * 2);
            } else if (op == "+") {
                int v1 = st.top(); st.pop();
                int v2 = st.top(); st.pop();
                st.push(v2);
                st.push(v1);
                st.push(v1 + v2);
            } else {
                st.push(stoi(op));  
            }
        }
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};