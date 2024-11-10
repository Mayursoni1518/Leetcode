class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i = 1 ; i < words.size() ; i++){
            string first = words[i] ;
            sort(first.begin() , first.end()) ;

            string second = words[i-1] ;
            sort(second.begin() , second.end()) ;

            if(first == second){
                words.erase(words.begin() + i ) ;
                i-- ;
            }
        }
        return words; 
    }
};