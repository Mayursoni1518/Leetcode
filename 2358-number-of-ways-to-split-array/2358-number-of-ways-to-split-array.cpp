class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total = accumulate(nums.begin() , nums.end() , 0LL ) ;
        long long cnt = 0 ; 
        long long sum = 0 ;
        long long remain = 0 ; 
        for(int i = 0 ; i < nums.size() - 1 ; i++ ) {
            sum += nums[i] ;
            remain = total - sum ; 
            if(sum >= remain) {
                cnt++ ; 
            }
        }
        return cnt ;
    }
};