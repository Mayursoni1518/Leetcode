class Solution {
public:
    bool pal(string s , int st , int end ){
        while(st < end) {
            if(s[st] != s[end]) {
                return false; 
            }
            st++;
            end-- ;
        }
        return true ; 

    }
    bool validPalindrome(string s) {
        int st = 0;
        int end = s.size() - 1;

        while (st < end) {
            if (s[st] != s[end]) {
                return pal(s, st + 1 , end) || pal(s, st, end -1 ) ;
            }
            st++;
            end--;
        }
        return true;
    }
};