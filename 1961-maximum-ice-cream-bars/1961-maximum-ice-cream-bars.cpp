class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin() , costs.end()) ;
        if(costs[0] > coins){
            return 0 ; 
        } 
        int ans = 0 ; 
        long long sum = 0 ;
        int n = costs.size() ;
        for(int i = 0 ; i < n ; i++ ) {
            sum += costs[i] ;

            if(sum <= coins ) {
                ans = i + 1; 
            }
        }
        return ans ;
    }
};