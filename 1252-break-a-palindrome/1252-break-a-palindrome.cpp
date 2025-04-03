class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size() ;
        if(n == 1 ) return "" ; 
        for(int i = 0 ; i < n ; i++ ){
            int midIdx = n / 2 ;

            if(n % 2 == 1 && i == midIdx) {
                continue; 
            }

            if(palindrome[i] != 'a'){
                palindrome[i] = 'a' ;
                return palindrome ;
            }
        } 

        palindrome[n-1] = 'b' ;
        return palindrome ; 
    }
};