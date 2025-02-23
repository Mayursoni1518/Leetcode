class Solution {
public:
    int n;
    
    void solve(int idx, string& temp, string& digits,
               unordered_map<char, string>& mp, vector<string>& result) {
        if (idx >= n) {
            result.push_back(temp);
            return;
        }

        char ch = digits[idx];
        string str = mp[ch];

        for (int i = 0; i < str.size(); i++) {
            temp.push_back(str[i]);
            solve(idx + 1, temp, digits, mp, result);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        n = digits.size();
        string temp = "";
        vector<string> result;

        unordered_map<char, string> mp = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };

        solve(0, temp, digits, mp, result);
        return result;
    }
};
