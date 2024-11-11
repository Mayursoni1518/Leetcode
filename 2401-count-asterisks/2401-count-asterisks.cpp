class Solution {
public:
    int countAsterisks(string s) {
        int res = 0 , flag = true ;

        for(char ch : s) {
            if(flag and ch == '*') res++ ;
            if(ch == '|') flag = !flag ;

        }
        return res; 
    }
};