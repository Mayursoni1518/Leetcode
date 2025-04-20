class Solution {
public:
    string findValidPair(string s) {
        string ans ;
        unordered_map<char,int>mp ;
        for(auto& i : s) {
            mp[i]++ ;
        }
        for(int i = 0 ; i < s.size() -1; i++ ){
            if(s[i] != s[i+1]){
                if(mp[s[i]] == s[i] - '0' && mp[s[i+1]] == s[i+1] - '0') {
                    ans.push_back(s[i]) ;
                    ans.push_back(s[i+1]) ; 
                    break ;
                }
            }
        }
        return ans ; 
    }
};