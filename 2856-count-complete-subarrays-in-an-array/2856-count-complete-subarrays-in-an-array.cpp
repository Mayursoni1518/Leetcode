class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size() ; 
        int left = 0 ;
        int ans = 0 ; 
        set<int>st(nums.begin() , nums.end()) ;
        int size = st.size() ;
        unordered_map<int,int>mp ; 
        for(int right=  0 ; right < n ;right++ ){
            mp[nums[right]]++ ;

            while(size == mp.size()){
                ans += nums.size()- right ; 
                mp[nums[left]]-- ;
                if(mp[nums[left]] == 0 ){
                    mp.erase(nums[left]) ;
                }
                left++ ; 
            }
        }
        return ans ;
    }
};