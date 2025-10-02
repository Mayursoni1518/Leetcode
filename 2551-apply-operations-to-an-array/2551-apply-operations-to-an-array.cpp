class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n - 1 ; i++ ) {
            if(nums[i] == nums[i+1]) {
                nums[i] = (nums[i] * 2) ; 
                nums[i+1] = 0 ; 
                i++ ; 
            }
        }
        int i = 0 ;
        int j = 0;
        while(j < n ) {
            if(nums[j] != 0 ) {
                swap(nums[i] , nums[j]) ; 
                i++ ;
            }
            j++;
        }
        return nums; 
    }
};