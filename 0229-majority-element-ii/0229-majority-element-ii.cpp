class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans ; 
        unordered_map<int,int>mapp ;

        for(auto i : nums){
            mapp[i]++ ;
        }
        int n = nums.size() ; 
        for(auto &pair : mapp ){
            if(pair.second> n / 3 ){
                ans.push_back(pair.first) ;
            }
        }
        return ans ; 
        
    }
};