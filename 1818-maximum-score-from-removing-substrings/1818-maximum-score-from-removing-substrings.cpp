class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int sum = 0;

        // Remove "ab" first if x >= y, else remove "ba" first
        if (x >= y) {
            sum += remove(s, "ab", x);
            sum += remove(s, "ba", y);
        } else {
            sum += remove(s, "ba", y);
            sum += remove(s, "ab", x);
        }

        return sum;
    }
    int remove(string &s , const string &target, int points ){
        int score = 0 ; 

        int i = 0; 
        while(i < s.size() ){
            if(i+1 < s.size() && s[i] == target[0] && s[i+1] == target[1]){
                s.erase(i, 2) ; 
                score += points ;
                i = max(0, i-1) ;
            }
            else{
                i++ ; 
            }
        }
        return score; 
    }

};
