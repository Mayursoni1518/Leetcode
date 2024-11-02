class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mapp ;

        for(auto i : nums){
            mapp[i]++ ;
        }
        vector<int>result ;
        for(auto ch : mapp ){
            if(ch.second == 2){
                result.push_back(ch.first) ;
            }
        }
        return result ;
    }
};