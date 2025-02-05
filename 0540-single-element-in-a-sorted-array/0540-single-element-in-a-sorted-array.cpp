class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0;
        int end = nums.size() - 1;
        int ans = 0 ; 
        while (st < end) {
            int mid = st + (end - st) / 2;
            if(mid % 2 == 1 ){
                mid-- ;
            }

            if(nums[mid] != nums[mid+1]){
                end = mid ; 
            }
            else{
                st = mid + 2 ; 
            }
        }
        return nums[st] ;
    }
};