class Solution {
public:
    bool checkIfPangram(string sentence) {
      set<char>st(sentence.begin() , sentence.end())  ;
      if(st.size() < 26) {
        return false ; 
      }
      return true ; 
    }
};