class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi = INT_MIN;
        for(int i = 0 ; i < colors.size() -1 ; i++ ){
            int val = 0 ; 
            for(int j = i + 1 ; j < colors.size() ; j++ ) {
                if(colors[i] != colors[j] ) {
                    val = abs(i-j) ;
                }
                maxi = max(maxi , val); 
            }
        }
        return maxi ;
    }
};