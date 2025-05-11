class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mp ;
        int ans = 0 ;
        for(auto& i : nums) {
            mp[i]++; 
        } 

        for(auto& i : mp ) {
            if(i.second == 2 ) {
                ans ^= i.first ; 
            }
        }
        return ans ; 
    }
};