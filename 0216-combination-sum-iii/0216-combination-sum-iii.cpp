class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> num = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<vector<int>> result;
        vector<int> temp;
        solve(k, n, temp, result, 0, num  );
        return result;
    }
    void solve(int k, int n , vector<int> &temp  ,vector<vector<int>>& result ,
               int idx, vector<int> num) {
        if (k == 0 && n == 0 ) {
            result.push_back(temp);
            return ; 
        }

        if(idx >= num.size() ) {
            return ; 
        }

        for(int i = idx ; i < num.size() ; i++ ){
            temp.push_back(num[i]) ;
            solve(k- 1 , n  - num[i], temp , result , i + 1, num) ;
            temp.pop_back() ; 
        }
    }
};