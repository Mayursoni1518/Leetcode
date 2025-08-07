class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size() ;
        int n = matrix[0].size() ; 

        unordered_map<int, set<int>>mp; 
        for(int i = 0 ; i < m ; i++ ){
            for(int j = 0 ; j < n ; j++) {
                mp[i-j].insert(matrix[i][j]) ; 
            }
        }

        for(auto& i : mp ) {
            set<int>st = i.second ;
            if(st.size() > 1 ) {
                return false ; 
            }
        }
        return true ; 
    }
};

another easy approach 
notice every element in diagonal is in 
if you are at (i , j) you diagonal will be ak row uper and ak column peeche 

for(int i = 1 ; i < m ; i++ ) {
    for(int j = 1 ; j < n ; j++) {
        if(matrix[i][j] != matrix[i-1][matrix[j-1]]) {
            return false ; 
        }
    }
    return true ; 
}
