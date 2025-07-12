class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp ;
        vector<vector<string>>ans ; 
        for(auto& ch : strs ){
            string sorted = ch ;
            sort(sorted.begin() , sorted.end()) ;
            mp[sorted].push_back(ch) ; 
        }
        for(auto& i : mp ) {
            ans.push_back(i.second) ;
        }
        return ans ; 
    }
};