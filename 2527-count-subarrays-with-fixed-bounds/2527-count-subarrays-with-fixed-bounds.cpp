class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0 ; 
        int maxInd = -1 ;
        int minInd = -1 ;
        int culprit = -1 ;
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i] > maxK || nums[i] < minK ){
                culprit = i ; 
            }

            if(nums[i] == maxK) {
                maxInd = i ; 
            }

            if(nums[i] == minK) {
                minInd = i ; 
            }

            long long smallest = min(maxInd , minInd) ;
            long long temp = smallest - culprit ; 
             ans += (temp < 0 ) ? 0 : temp ; 
        }
        return ans ; 
    }
};