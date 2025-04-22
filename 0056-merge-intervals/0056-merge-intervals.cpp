class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) { return a[0] < b[0]; }
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(), in.end(), cmp);
        vector<vector<int>> result;
        result.push_back(in[0]);
        for (int i = 1; i < in.size(); i++) {
            if (result.back()[1] >= in[i][0]) {
                result.back()[1] = max(result.back()[1], in[i][1]);
            } else {
                result.push_back(in[i]);
            }
        }
        return result;
    }
};