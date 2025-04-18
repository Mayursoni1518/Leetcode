class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int val = abs(nums[i] - 0);
            mini = min(mini, val);
        }
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(mini == nums[i]){
                return mini ; 
            }
        }
        return -mini ;
    }
};