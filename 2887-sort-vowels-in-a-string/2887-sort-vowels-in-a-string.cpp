class Solution {
public:
    bool vowel(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return true;
        }
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            return true;
        }
        return false ;
    }

    string sortVowels(string s) {
        string v;
        int j = 0 ; 
        for(int i = 0 ; i < s.size() ; i++ ) {
            if(vowel(s[i])) {
                v.push_back(s[i]) ; 
            }
        }
        sort(v.begin() , v.end()) ; 
        for (int i = 0; i < s.size(); i++) {
            if(vowel(s[i])){
                s[i] = v[j] ; 
                j++ ;
            }
        }
        return s ; 
    }
};