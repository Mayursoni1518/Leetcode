class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int j = 1 ; 

       for(int i = 1 ; i < nums.size() ; i++){
        if(nums[i] != nums[i-1]){
            nums[j] = nums[i] ;
            j++;
        }
       }
       return j; 
    }
};

// It say's that you have to return the size of the compressed array with no duplicates , while you can see the vector is call by reference so it checks whether the array (nums) you have updated or not , while ignoring after the required spaces