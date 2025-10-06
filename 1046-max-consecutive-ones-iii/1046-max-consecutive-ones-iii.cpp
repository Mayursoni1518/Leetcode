class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count1 = 0 ;
        int i = 0 ;
        int j = 0 ;
        int count0 = 0; 
        int n = nums.size() ;
        int maxi = INT_MIN; 
        while(j < n ) {
            if(nums[j] == 1) {
                count1++ ;
            }
            else{
                count0++ ;
            }
            while(count0 > k ) {
                if(nums[i] == 0 ) {
                    count0-- ; 
                }
                i++ ;
            }
            maxi = max(maxi , j - i + 1 ) ; 
            j++; 
        }
        return maxi ;
    }
};