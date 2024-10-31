class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() ; 
        int times = n / 2 ;
        unordered_map<int,int>result ;
        for(auto i : nums){
            result[i]++ ;
        }
        for(auto i : result ){
            if(i.second > times){
                return i.first ;
            }
        }
        return 0 ;
    }
};