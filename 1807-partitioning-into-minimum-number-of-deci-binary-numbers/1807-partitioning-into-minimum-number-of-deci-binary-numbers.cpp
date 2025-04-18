class Solution {
public:
    int minPartitions(string n) {
        vector<int>st; 
        int ans = 0 ; 
        for(int i = 0 ; i < n.size() ; i++ ){
            st.push_back((n[i] - '0')); 
        }
        int maxi = *max_element(st.begin() , st.end()) ;
        return maxi ; 
    }
};