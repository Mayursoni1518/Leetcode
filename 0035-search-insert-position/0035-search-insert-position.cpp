class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size() ;
       for(int i = 0 ; i<nums.size() ; i++){
        if(nums[i] == target){
            return i ;
        }
        else if (nums[i] > target) {
            return i ; 
        }
       }
       return  n ;
    }
};