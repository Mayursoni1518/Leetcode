class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size() ; 
      

        for(int i = 0 ; i < nums.size()-1 ; i++ ){
            if(nums[i] == nums[i+1]) {
                nums[i] = nums[i] * 2 ;
                nums[i+1] = 0 ; 
            }
            else{
                continue; 
            }
        }
        int st = 0 ;
        int end = st + 1 ;
        while(st < n && end < n ){
            if(nums[st] == 0 && nums[end] != 0 ){
                swap(nums[st] , nums[end]) ;
                st++ ;
                end++ ; 
            }
            else if(nums[st] != 0 && nums[end] != 0 ){
                st++ ;
                end++ ;
            }
            else if(nums[st] != 0 && nums[end] == 0 ){
                st++ ;
                end++ ; 
            }
            else if(nums[st] == 0 && nums[end] == 0 ) {
                end++ ; 
            }
        }
        return nums ; 
    }
};