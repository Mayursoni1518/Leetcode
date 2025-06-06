class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size() ;
        int n = mat[0].size()- 1 ;

        int st = 0 ;
        int col = n ;

        while(st <= m - 1 && col >= 0 ) 
        {
            if(mat[st][col] == target) {
                return true; 
            }
            else if(mat[st][col] > target ) {
                col-- ;
            }
            else{
                st++; 
            }
        }
        return false ;
    }
};
// approach for this question is to 
// start with the top-right element 
// if the target is less than 
// col--

// if(target is greater then )[
//     row++ ;
// ]