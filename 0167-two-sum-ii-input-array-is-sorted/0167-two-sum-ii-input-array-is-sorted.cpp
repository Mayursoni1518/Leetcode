class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp ;

        for(int i = 0 ; i < nums.size();  i++){
            int remain = target - nums[i] ;

            if(mp.find(remain) != mp.end()){
                return {mp[remain]+1, i+1 };

            }
                mp[nums[i]] = i ;
        }
        return {} ; 
    }
};