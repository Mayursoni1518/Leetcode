class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i = 0 ; 
       int cnt = 0 ;
       for(int j = 1 ; j < nums.size() ; j++ )
       {
        if(nums[j] != nums[i]) {
            cnt++ ;
            i++ ; 
            nums[i] = nums[j] ; 
        }
       }
       return cnt + 1 ; 
    }
};