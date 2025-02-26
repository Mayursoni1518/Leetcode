class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(candidates, target, result, temp, 0, 0);
        return result ; 
    }
    void backtrack(vector<int>& candidates, int& target, vector<vector<int>>& result,
              vector<int>& temp, int idx, int total) {
        if (total == target) {
            result.push_back(temp);
            return ; 
        }

        if (idx >= candidates.size() || total > target) {
            return;
        }
        temp.push_back(candidates[idx]) ;
        backtrack(candidates, target, result, temp, idx,total + candidates[idx]);
        temp.pop_back() ;
        backtrack(candidates, target , result , temp , idx + 1 , total ) ; 
    }
};