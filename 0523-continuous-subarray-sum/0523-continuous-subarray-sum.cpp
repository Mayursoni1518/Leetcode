class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(); 
        unordered_map<int,int>mp ;
        int sum = 0 ;
        mp.insert({0,-1});
        for(int i = 0 ; i < n ; i++ ) {
            sum += nums[i] ;
            int value = sum % k ;
            if(mp.find(value) != mp.end()) {
                if((i - mp[value]) >= 2) {
                    return true ; 
                }
            }
            else{
            mp[value] = i ;
            } 
        }
        return false ; 
    }
};