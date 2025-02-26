class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size() ;
        unordered_map<int,int>mp ;
        int count = 0 ; 
        for(auto i : nums){
            mp[i]++ ; 
        }

        for(auto &p : mp){
            int val = p.second ;

            if(val == 1 ) return -1 ;
            if(val % 3 == 0 ){
                count += val / 3 ; 
            }
            else{
                count += val / 3 + 1; 
            }
        }
        return count ; 
    }
};