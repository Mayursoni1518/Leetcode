class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans ; 
        sort(nums.begin() , nums.end()) ; 
        int n = nums.size() ;
        for(int i = 0 ; i < n - 3 ; i++) {
            if(i > 0 && nums[i] == nums[i-1]) {
                continue ; 
            }
            for(int j = i + 1 ; j < n -2 ; j++) {
                if( j > i  + 1 && nums[j] == nums[j-1]){
                    continue ; 
                }
                for(int k = j + 1 ; k < n - 1 ; k++) {
                    if(k > j + 1  && nums[k] == nums[k-1]) {
                        continue ; 
                    }
                    for(int z = k + 1 ; z < n ; z++) {
                        if( z > k + 1 && nums[z] == nums[z-1]) {
                            continue ; 
                        }
                        long val = (long)nums[i] + nums[j] + nums[k] + nums[z] ;
                        if(val == target) {
                            vector<int>rr = {nums[i] , nums[j] , nums[k] , nums[z]} ; 
                            ans.push_back(rr) ; 
                        }
                    }
                }
            }
        }
        return ans ; 
    }
};