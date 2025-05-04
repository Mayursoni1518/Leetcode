class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int,int>count ;
        int ans= 0 ;
        for(auto& d : dominoes) {
            int f = d[0] ; 
            int s = d[1] ; 

            int value = min(f,s) * 10 + max(f,s) ;
            ans += count[value] ;
            count[value]++; 
        }
        return ans ; 
    }
};
// seen by chatgpt 