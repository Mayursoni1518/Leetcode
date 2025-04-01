class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int cnt1 = 0; 
        int cnt2 = 0; 
        
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] >= nums[i + 1]) {
                cnt1++;  
            }
            if(nums[i] <= nums[i + 1]) {
                cnt2++;  
            }
        }
        
       
        if(cnt1 == nums.size() - 1 || cnt2 == nums.size() - 1) 
            return true; 
        
        return false;
    }
};
