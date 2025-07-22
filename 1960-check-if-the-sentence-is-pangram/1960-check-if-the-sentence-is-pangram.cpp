class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char ,int>mp ;
        for(auto& i : sentence){
            mp[i]++ ; 
        }
        for(char ch = 'a' ; ch <= 'z' ; ch++) {
            if(mp[ch] == 0) {
                return false ; 
            }
        }
        return true; 
    }
};