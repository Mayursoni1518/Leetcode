class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size() ;
        int n = matrix[0].size() ;
        int row = 0 ;
        int col = 0 ; 
        set<int>ans, ans2 ; 
        for(int i = 0 ; i < m ; i++ ) 
        {
            for(int j = 0 ; j < n ; j++ ){
                if(matrix[i][j] == 0 ) {
                    ans.insert(i) ;
                    ans2.insert(j) ;
                }
               
            }
        }
        for(int i = 0 ; i < m ; i++ ) 
        {
            for(int j = 0 ; j < n ; j++ ){
                if(ans.count(i) || ans2.count(j) ) {
                    matrix[i][j] = 0 ;
                }               
            }
        }
        
    }
};
