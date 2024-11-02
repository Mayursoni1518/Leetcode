class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size() ; 
        unordered_set<int>unique(nums.begin() , nums.end()) ;
        vector<int>missing ;
        for(int i = 1 ; i <= nums.size() ; i++){
            if(unique.find(i) == unique.end()) {
                missing.push_back(i); 
            }
        } 
        return missing ;
    }
};