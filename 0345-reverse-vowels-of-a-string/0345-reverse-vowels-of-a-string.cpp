class Solution {
public:
    void swap(char &a , char &b) {
        char temp = a; 
        a = b ;
        b = temp ;
    }
    string reverseVowels(string s) {
        int st = 0 ;
        int end = s.size() -1 ;

        auto Vowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
        };

        while(st < end) {
            if(Vowel(s[st]) && Vowel(s[end])){
                swap(s[st] , s[end]) ;
                st++; 
                end--; 
            }
            else if ( !Vowel(s[st])) st++ ;
            else if( !Vowel(s[end])) end-- ;
        }
        return s ;
    }
    
};