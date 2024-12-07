class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mapp ;
        for(auto num : arr){
            mapp[num]++ ;
        } 

        vector<int>result ;
        for(auto ch : mapp){
            result.push_back(ch.second) ; 
        }

        set<int>sett(result.begin() , result.end()) ;

        return sett.size() == result.size() ? 1 : 0 ;
    }
};