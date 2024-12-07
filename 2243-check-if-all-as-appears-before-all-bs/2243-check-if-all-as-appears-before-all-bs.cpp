class Solution {
public:
    bool checkString(string s) {
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'a' && s[i+1] == 'a') continue ;
            else if (s[i] == 'b' && s[i+1] == 'b' ) continue ; 

            else if(s[i] == 'a' && s[i+1] == 'b' ) continue ;
            else if(s[i] == 'b' && s[i+1] == 'a') {
                    return false; 
            }
        }
        return true ; 
    }
};