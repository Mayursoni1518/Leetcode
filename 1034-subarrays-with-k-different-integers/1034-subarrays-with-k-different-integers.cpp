class Solution {
public:
    int count(vector<int>& nums , int k ) {
        int i = 0 ;
        int j = 0 ;
        unordered_map<int,int>mp ;
        int count = 0 ;
        int n = nums.size() ;
        while(j < n ) {
            mp[nums[j]]++ ;

            while(mp.size() > k ) {

                mp[nums[i]]-- ;
                if(mp[nums[i]] == 0 ) {
                    mp.erase(nums[i]) ;
                }
                i++ ; 
            }
            count += (j - i + 1) ; 
            j++ ; 
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
         return count(nums, k ) - count(nums , k-1) ;
    }
};