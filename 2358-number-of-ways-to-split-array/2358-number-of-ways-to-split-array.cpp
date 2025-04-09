class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total = 0 ;
        long long sum = 0 ;
        int n = nums.size() ;

        for(int i = 0 ; i< n ; i++ ){
            total += nums[i] ;
        }
        int ans = 0 ;
        for(int i = 0 ; i < n -1 ; ++i){
            sum += nums[i] ;
            long long suffix = total - sum ;
            if(sum >= suffix){
                ans++ ; 
            }
        }
        return ans; 
    }
};