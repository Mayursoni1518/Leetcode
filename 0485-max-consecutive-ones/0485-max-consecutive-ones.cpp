class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int on = 0 ;
        int ze = 0 ;
        int maxi = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i] == 0 ) {
               ze++ ; 
               on = 0 ; 
            }
            if(nums[i] == 1) {
                on++ ;
                ze = 0 ; 
            }
            maxi = max(maxi , on) ;
        }
        return maxi ;
    }
};