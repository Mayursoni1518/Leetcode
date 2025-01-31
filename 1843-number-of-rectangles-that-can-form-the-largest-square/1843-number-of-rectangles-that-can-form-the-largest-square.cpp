class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxArea = 0 ; 
        int count = 0 ;

        for(int i = 0 ; i< rectangles.size() ; i++){
            int len = min(rectangles[i][0], rectangles[i][1]) ;

            if(len > maxArea) {
                maxArea = len ; 
                count = 1; 
            }

            else if ( len == maxArea) {
                count++ ;
            }
        }
        return count; 

    }
};