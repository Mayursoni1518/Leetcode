class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int mod = 1e9 + 7 ;
        vector<long>store; 
        for(int i = 0 ; i < n ; i++ ){
            long long sum = 0 ;
            for(int j = i ; j < n ; j++ ){
                sum += nums[j] ;
                store.push_back(sum % mod);
            }
        }
        sort(store.begin() , store.end()) ;
        long long  ans = 0 ; 
        for(int i = left - 1; i< right ; i++ ){
            ans = (ans + store[i]) % mod; 
        }
        return ans ;
    }
};