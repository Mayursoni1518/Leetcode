class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        int ans ; 
        for(int i = 0 ;  i < nums.size() ; i++){
            if(nums[i] == i ) {
                continue ;
            }
            else{
                ans = i  ;
                return ans; 
            }
        }
        return nums.size() ; 
        
    }
};