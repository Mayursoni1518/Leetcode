class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        string word ; 
        int cnt = -1 ;
        int ans = 0 ;
        for(int i = 0 ; i < text.size() ; i++) {
            if(text[i] != ' ') {
                word += text[i] ; 
                if(brokenLetters.find(text[i]) != string::npos){
                    cnt = 0; 
                }
            }
            else{
                word = "" ;
                if(cnt == -1){
                    ans++ ; 
                }
                cnt = -1 ; 
            }
        }
        if(cnt == -1){
            ans++; 
        }
        return ans ; 
    }
};