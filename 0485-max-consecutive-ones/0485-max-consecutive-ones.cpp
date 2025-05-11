class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size() ;
        int cnt = 0 ;
        int i = 0 ;
        int j = 0 ;
        int maxi = 0 ; 
        while(j < n )
        {
            if(nums[j] == 1 )
            {
                cnt++ ;
                maxi = max(maxi , cnt ) ; 
            }
            else{
                cnt = 0 ; 
            }
            j++ ; 
        } 
        return maxi ; 
    }
};