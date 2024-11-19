class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0 ;

        for(int i = 0 ; i < words.size() ; i++){
            if(words[i].size() <= s.size() && s.substr(0 , words[i].size()) == words[i]){
                count++ ;
            }
        }
        return count ; 
    }
};