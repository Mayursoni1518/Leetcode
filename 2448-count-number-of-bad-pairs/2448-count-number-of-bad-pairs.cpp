class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++ ){
            nums[i] = nums[i] - i ; 
        }
        int n = nums.size() ; 
        long long Good = 0 ;
      
        unordered_map<int,int>mp; 
        long long total = 1LL * n * (n - 1) / 2 ;
        for(int i = 0 ; i  < nums.size() ; i++) {
            if(mp.count(nums[i])){
                Good = (Good + mp[nums[i]]) ;
            }
            mp[nums[i]]++;
        }
        return total - Good ; 
    }
};