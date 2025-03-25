class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total = 0 ;
        int sum = 0 ;
        int mini = 0 ; 
        int window = 0 ;
        int n = cardPoints.size() ;

        for(int i = 0 ; i < cardPoints.size() ; i++) {
            total += cardPoints[i] ;
        }
        for(int j = 0 ; j < n - k ; j++ ){
            window += cardPoints[j];
        }
        mini = window ;
        for(int i = n - k ; i < n ; i++) {
            window += cardPoints[i] - cardPoints[i-(n-k)] ;
            mini = min(mini , window) ;

        }
        return total - mini ; 
    }
};