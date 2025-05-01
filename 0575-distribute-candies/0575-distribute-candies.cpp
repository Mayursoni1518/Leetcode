class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>mp ;
        for(auto& i : candyType) {
            mp[i]++ ; 
        }
        int n = candyType.size(); 
        int possible = n / 2 ; 
        set<int>st(candyType.begin() , candyType.end()) ;
        int size = st.size(); 
        if(size < possible ) {
            return size; 
        }
        return possible ; 
    }
};
