class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp ;
        int n = nums.size();
        int sum = 0 ;
        int result = 0 ;
        mp.insert({0,1}) ; 
        for(int i = 0 ; i< n ; i++ ) {
            sum += nums[i] ;

            if(mp.find(sum-goal) != mp.end()) {
                result += mp[sum-goal] ;
            }

            mp[sum]++ ; 
        }
        return result ; 
    }
};