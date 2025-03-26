class Solution {
public:
    
    int rev(int num ) {
        int sum = 0 ;
        while(num != 0 ) 
        {
            int temp = num % 10 ;
            sum = sum * 10 + temp ; 
            num /= 10 ; 
        }
        return sum ; 
    }
    
    int countNicePairs(vector<int>& nums) {
        int n = nums.size() ;
        const int MOD = 1e9 + 7;
        for(int i = 0 ; i < nums.size() ; i++ ){
            nums[i] = nums[i] - rev(nums[i]) ;
        }
        unordered_map<int,int>mp ;
        int cnt = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(mp.count(nums[i])) {
                cnt = ( cnt + mp[nums[i]]) % MOD ;
            }
            mp[nums[i]]++ ;
        }
        return cnt ;
        
    }
};