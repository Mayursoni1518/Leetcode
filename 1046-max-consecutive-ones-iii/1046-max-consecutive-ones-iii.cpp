class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int Zero = 0 ;
        int maxi= 0; 


        int i = 0 ;
        int j = 0 ;
        int n = nums.size() ;
        while(j < n ) {
            if(nums[j] == 0 ) {
                Zero++ ; 
            }

            while(Zero > k ) {
                if(nums[i] == 0 ) {
                    Zero-- ;
                }
                i++ ; 
            
            }
            maxi = max(maxi , j - i + 1) ; 
            j++ ; 
        }
        return maxi ;
    }
};