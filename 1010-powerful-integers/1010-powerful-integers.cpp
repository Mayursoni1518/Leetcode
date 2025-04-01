class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int>unique ;
        vector<int>ans ; 

        for(int i = 0 ; pow(x , i ) <= bound ; i++ ) {
            for(int j =  0 ; pow(y , j ) <= bound ; j++ ) {
                int val = pow(x , i) + pow(y , j) ;
                if(val <= bound){
                    unique.insert(val) ;
                } 
                if(y == 1 ) {
                    break ;
                }
            }
            if(x == 1) {
                break ;
            }
        }
        ans.assign(unique.begin() , unique.end()) ; 
        sort(ans.begin() , ans.end()) ;
        return ans ; 
    }
};