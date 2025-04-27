class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size() ;
        double ans = 0 ;
        for(int i = 0 ; i < n - 2 ; i++ ){
            if(((double)nums[i] + (double)nums[i+2]) == ((double)nums[i+1] / 2.0 )){
               ans++ ; 
            }
        }
        return ans ; 
    }
};