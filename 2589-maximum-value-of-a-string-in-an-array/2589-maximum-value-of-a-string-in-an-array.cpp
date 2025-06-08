class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n = strs.size(), ans = 0;
        for(int i = 0; i < n; i++){
            int m = strs[i].length();
            bool isdigit = true;
            for(int j = 0; j < m; j++){
                if(isalpha(strs[i][j])){
                    ans = max(ans , m);
                    isdigit = false;
                    break;
                }
            }
            if(isdigit) ans = max(ans , stoi(strs[i]));
        }
        return ans;
    }
};