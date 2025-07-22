class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans ; 
        for(int i = 0 ; i < nums.size() - 1 ; i += 2 ) {
            int times = nums[i] ; 
            int val = nums[i+1] ; 
            ans.insert(ans.end() , times , val) ; 
        }
        return ans; 
    }
};