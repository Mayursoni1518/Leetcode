class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size() ;
        if(n == 1 ) {
            return nums[0] ; 
        }
        
        set<int>st ;
        sort(nums.begin() , nums.end());

        if(nums[0] < 0 && nums[n-1] < 0 ) {
            return nums[n-1] ; 
        }
        reverse(nums.begin(),nums.end()) ;  
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++ ) {
            if(nums[i] >=0  && !st.count(nums[i]))
            sum += nums[i] ;
            st.insert(nums[i]) ;
        }
        return sum ; 
    }
};
