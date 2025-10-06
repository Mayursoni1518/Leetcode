class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size() ; 
        int prod = 1 ;
        int prodd = 1 ; 
        int prodwithzero = 1 ;
        vector<int>ans(n , 0 ); 
        int cnt= 0; 
        for(int i = 0 ; i <n; i++ ) {
            if(nums[i] == 0 ) {
                cnt++ ; 
            }
            prod *= nums[i] ;
            if(nums[i] != 0 ) {
                prodwithzero *= nums[i] ; 
            }
            if(cnt > 1) {
                return ans ; 
            }
        } 
        for(int i = 0 ; i< n ; i++ ) {
            if(cnt == 0 ) {
                ans[i] = prodwithzero / nums[i] ; 
            }
            else if(cnt == 1) {
                if(nums[i] == 0) {
                    ans[i] = prodwithzero; 
                }
                else{
                    ans[i] = 0 ; 
                }
            }
        }
        return ans ;

    }
};