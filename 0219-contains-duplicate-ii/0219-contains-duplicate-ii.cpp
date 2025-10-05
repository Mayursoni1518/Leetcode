class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size() ;
        unordered_map<int,int>mp ;
        for(int i = 0 ; i < nums.size() ; i++ ) {
            int num = nums[i] ; 
            if(mp.find(num) != mp.end()){
                if(abs(mp[nums[i]] - i ) <= k) {
                    return true ; 
                }
            }
            mp[nums[i]] = i ; 
        }
        return false ;
    }
};