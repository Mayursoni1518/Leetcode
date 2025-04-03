class Solution {
public:
    int maximum69Number(int num) {
        vector<int> ans;
        while (num != 0) {
            int temp = num % 10;
            ans.push_back(temp);
            num /= 10;
        }

        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == 6) {
                ans[i] = 9;
                break;
            }
        }
        int result = 0;
        for (int i = 0; i < ans.size(); i++) {
            result = result * 10 + ans[i];
        }
        return result;
    }
};