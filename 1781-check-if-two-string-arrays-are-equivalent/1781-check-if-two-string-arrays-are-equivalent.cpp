class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string r1 , r2 ; 

        for(int i = 0 ; i < word1.size(); i++ ) {
            r1 += word1[i] ; 
        }
        for(int i = 0 ; i < word2.size() ;i++) {
            r2 += word2[i] ; 
        }
        return r1 == r2 ; 
    }
};