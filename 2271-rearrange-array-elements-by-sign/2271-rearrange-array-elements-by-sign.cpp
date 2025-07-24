class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>f , s ;
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            if(nums[i] > 0 ) {
                f.push_back(nums[i]) ; 
            }
        }
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            if(nums[i] < 0 ) {
                s.push_back(nums[i]) ; 
            }
        }
        vector<int>ans ; 
        int i = 0 ;
        int j = 0 ;
        for(int i = 0 ; i < f.size() ; i++ ) {
            ans.push_back(f[i]) ;
            ans.push_back(s[i]) ; 
        }
        return ans ; 
    }
};

// [3,1,-2,-5,2,-4]
