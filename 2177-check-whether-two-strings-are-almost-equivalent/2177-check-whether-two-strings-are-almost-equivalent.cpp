class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>map1 , map2; 

        for(auto ch : word1){
            map1[ch]++ ; 
        }
        for(auto chh : word2){
            map2[chh]++ ;
        }

        for(char c = 'a' ; c <= 'z' ; c++){
            int freq1 = map1[c] ;
            int freq2 = map2[c] ;

            if(abs(freq1 - freq2) > 3 ){
                return false ;
            }
        }
        return true ;
    }
};