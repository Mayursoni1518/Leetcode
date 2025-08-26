class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxi = INT_MIN ;
        int anss ; 
        int ans = INT_MIN ;
        double srt = 0 ;
        for(int i = 0 ; i < dimensions.size() ; i++ ) {
            int f = dimensions[i][0];
            int s = dimensions[i][1] ;

            int val = f * f + s * s ; 
            srt = sqrt(val);
            if(srt > maxi) {
                maxi = srt ;
                ans = f * s ; 
            }
            else if(srt == maxi){
                ans = max(ans , f * s) ;  
            }
        }
        return ans ; 
    }
};