class Solution {
public:
    int n; 
    void backtrack(vector<int>& nums, int idx , vector<int> &current , vector<vector<int>> &result ){
        if(current.size() >= 2 ){
            result.push_back(current) ;
        }

        unordered_set<int>st ;

        for(int i = idx ; i < n ; i++ ){
            if((current.empty() || nums[i] >= current.back()) && (st.find(nums[i]) == st.end())){
                current.push_back(nums[i]) ;
                backtrack(nums,  i + 1 , current, result ); 
                current.pop_back() ; 

                st.insert(nums[i]) ;
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
         n = nums.size() ;

        vector<vector<int>> result ;
        vector<int>current ; 

        backtrack(nums,0,current, result ) ;
        return result ; 
    }
};