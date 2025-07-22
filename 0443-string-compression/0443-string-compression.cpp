class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        int n = chars.size();
        int index = 0;
        for (int i = 0; i < chars.size(); i++) {
            char ch = chars[i];
            int cnt = 1;

            while (i < chars.size() - 1 && chars[i] == chars[i + 1]) {
                cnt++;
                i++;
            }
            chars[index++] = ch;
            if (cnt > 1) {
                string cntst = to_string(cnt);
                for (char c : cntst) {
                    chars[index++] = c;
                }
            }
        }
        return index;
    }
};