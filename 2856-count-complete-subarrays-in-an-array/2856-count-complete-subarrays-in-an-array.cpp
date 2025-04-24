class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size() ;
        set<int>st(nums.begin() , nums.end() ) ; 
        int size = st.size() ; 
        unordered_map<int,int>mp;
        int ans = 0 ;  
        for(int i = 0 ; i < nums.size(); i++ ){
            for(int j = i ; j < nums.size() ; j++ ){
                mp[nums[j]]++ ;

                if(mp.size() == size){
                    ans++ ; 
                }
            }
            mp.clear() ;
        }
        return ans ;
    }
};