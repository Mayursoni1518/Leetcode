class Solution {
public:
    int maxArea(vector<int>& height) {
       int n = height.size() ;
       int i = 0 ;
       int maxi = INT_MIN ;
       int j = n - 1 ; 
       while(i < j ) {
        int val = min(height[i] , height[j]) * (j - i ); 
        maxi = max(maxi , val); 
        if(height[i] < height[j] ) {
            i++ ; 
        }
        else{
            j-- ; 
        }
       }
       return maxi ;
    }
};