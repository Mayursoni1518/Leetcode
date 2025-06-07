class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp ;

        for(int i = 0 ; i <= nums.size() - 2 ; i++ ) {
            if(nums[i] == key ) {
                mp[nums[i+1]]++ ; 
            }
        }
        int maxi = INT_MIN ;
        for(auto& i : mp ) 
        {
            maxi = max(maxi , i.second ) ; 
        }
        for(auto& i : mp ){
            if(i.second == maxi) {
                return i.first; 
            }
        }
        return -1 ; 
    }
};
