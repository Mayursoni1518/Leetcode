class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp ;
        for(auto& i : nums )
        {
            mp[i]++; 
        }
        int maxi = 1; 
        for(auto& i : mp) {
            if(i.second > maxi ){
                maxi = i.second ; 
            }
        }
        int ans = 0 ; 
        for(auto& i : mp ){
            if(i.second == maxi ) {
                ans += i.second  ; 
            }
        }
        return ans ;

    }
};