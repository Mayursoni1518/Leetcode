class Solution {
public:
    int n ; 
    bool Palindrome(string &s , int st , int end ){
        while(st < end){
            if(s[st] != s[end]){
                return false ;
            }
            st++ ;
            end-- ; 
        }
        return true ; 
    }
    void backtrack(string &s , int idx , vector<string>&curr, vector<vector<string>> &result ){
        if(idx == n ){
            result.push_back(curr) ;
        }

        for(int i = idx ;i < n ; i++ ){
            if(Palindrome(s, idx , i )){
                curr.push_back(s.substr(idx,i-idx+1)) ;
                backtrack(s,i+1 , curr, result ) ;
                curr.pop_back() ;
            }
        }
    }
    vector<vector<string>> partition(string s) {
        n = s.size() ; 
        vector<vector<string>> result ; 
        vector<string>curr ;

        backtrack(s, 0, curr , result ) ;
        return result ;
    }
};