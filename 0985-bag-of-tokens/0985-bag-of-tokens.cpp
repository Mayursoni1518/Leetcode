class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin() , tokens.end()) ;
        int n = tokens.size() ;
        int i = 0 ;
        int j = n - 1; 

        int score = 0; 
        int maxi = 0 ;
        while(i <= j ) {
            if(power >= tokens[i]){
                power -= tokens[i] ;
                score += 1 ;
                maxi = max(maxi , score) ;
                i++ ;
            }
            else if(score >= 1) {
                power += tokens[j] ;
                score -= 1 ;
                j-- ;
            }
            else{
                return maxi ; 
            }
        }
        return maxi ; 
    }
};