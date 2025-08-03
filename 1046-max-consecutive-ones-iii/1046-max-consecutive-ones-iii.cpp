class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size() ;
        unordered_map<int,int>mp ;
        int i = 0 ;
        int j = 0 ;
        int maxi = 0 ;
        while(j < n ) 
        {
            mp[nums[j]]++ ;

            while(mp[0] > k ) {
                mp[nums[i]]-- ;

                if(mp[nums[i]] == 0 ) {
                    mp.erase(nums[i]) ; 
                }
                i++; 
            }
            maxi = max(maxi , j -i + 1 ) ;
            j++ ;
        } 
        return maxi ;
    }
};