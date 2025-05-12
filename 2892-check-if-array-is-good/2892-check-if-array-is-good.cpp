class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size() ;
        if(n == 1 ) return false ; 
        sort(nums.begin() , nums.end() ) ;                                            
        int maxi = *max_element(nums.begin() , nums.end() ) ; 
        for(int i = 0 ; i < n -1 ; i++)
        {
            if(nums[i] != i + 1) {
                return false; 
            }
        }

        if((nums[n-1] != maxi && nums[n-2] == maxi) ||  (nums[n-1] == maxi && nums[n-2] != maxi)  ) {
            return false ;
        }

        return true; 
    }
};