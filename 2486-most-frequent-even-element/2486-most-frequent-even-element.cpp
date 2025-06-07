class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp; 
        for(auto& i : nums) 
        {
            if(i % 2 == 0 ) { 
            mp[i]++; 
            } 
        }
        int freq = 0 ; int ans = -1 ;

        for(auto& [num , count] : mp ) {
            if(count > freq) 
            {
                freq = count ; 
                ans = num ; 
            }
            else if(count == freq) {
                ans = min(ans , num) ;
            }
        }
        return ans ;

        

    }
};