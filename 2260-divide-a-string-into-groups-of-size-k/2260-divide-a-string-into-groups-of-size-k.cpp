class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        vector<string> result;
        string str;
        for (int i = 0; i < n; i++) {
            str += s[i];
            if (str.size() == k) {
                result.push_back(str);
                str = "";
            }
        }

        if (!str.empty()) {
            int val = k - str.size();
            str.append(val, fill);  
            result.push_back(str);
        }

        return result;
    }
};