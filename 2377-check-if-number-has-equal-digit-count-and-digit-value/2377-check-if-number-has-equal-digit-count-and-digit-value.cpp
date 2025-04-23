class Solution {
public:
    bool digitCount(string num) {
        int n = num.size() ;
        unordered_map<char,int>mp ;
        for(auto& i : num){
            mp[i]++ ;
        }

        for(int i = 0 ; i < n ; i++ ){
            int expected = num[i] - '0' ;
            int digit = i + '0' ;
            if(mp[digit] != expected) {
                return false ; 
            }
        }
        return true; 
    }
};