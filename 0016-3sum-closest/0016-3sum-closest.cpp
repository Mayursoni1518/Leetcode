class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size() ;
        int close = 100000;
        sort(nums.begin() , nums.end()) ; 
        for(int i = 0 ; i < n - 2; i++ ) {
            int j = i + 1 ;
            int k = n - 1 ;
            while( j < k ) {
                int sum = nums[i] + nums[j] + nums[k] ; 
                if(abs(target - sum) < abs(target - close)) {
                    close = sum ; 
                }
                else if(sum > target) {
                    k-- ; 
                }
                else{
                    j++ ;
                }
            }
        }

        return close ; 
    }
};