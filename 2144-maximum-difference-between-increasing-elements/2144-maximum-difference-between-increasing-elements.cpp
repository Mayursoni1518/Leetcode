class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0] ;
        int maxi = 0  ; 
        for(int i = 0 ;  i< nums.size() ; i++ )
        {
            if(nums[i] < mini ) {
                mini = nums[i] ; 
            }
            maxi = max(maxi , nums[i] - mini); 
        }
        return maxi == 0 ? -1 : maxi ; 
    }
};