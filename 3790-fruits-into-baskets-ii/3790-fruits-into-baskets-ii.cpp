class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int cnt = 0 ;
        for(auto& x : fruits) 
        {
            bool ans = false ;

            for(int i = 0 ; i < baskets.size() ; i++) {
                if(baskets[i] >=x ) {
                    baskets[i] = 0 ;
                    ans = true ; 
                    break ;
                }
            }

            if(!ans) {
                cnt++ ; 
            }
        }
        return cnt ;
    }
};