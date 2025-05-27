class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        int prodZ =  1 ; 
        vector<int>ans ; 
        for (auto& i : nums) {
            prod *= i;
        }
        for (auto& i : nums) {
            if (i != 0) {
                prodZ *= i;
            }
        }
        int cnt = 0 ;
        for(auto& i : nums) 
        {
            if(i == 0 ) {
                cnt++ ; 
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if(prod == 0 ) {
                if(nums[i] != 0 ) {
                    ans.push_back(0) ; 
                }
                else{
                    if(cnt > 1 ){
                        ans.push_back(0) ; 
                    }
                    else{
                        ans.push_back(prodZ) ; 
                    }
                }
            }
            else{
                ans.push_back(prod / nums[i] ) ; 
            }
        }
        return ans ;
    }
};