class Solution {
public:
    bool isSubstringPresent(string s) {
        string org = s ; 
        reverse(s.begin() , s.end()) ;
        for(int i = 0 ; i < s.size() - 1 ; i++) {
            if(org.find(s.substr(i , 2)) != string::npos){
                return true ; 
            }
        }
        return false ; 
    }
};