class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n = s.size() ;
        int sizee = n ; 
        
        queue<char>que ;
        for(int i = 0 ; i < n ; i++ ) {
            que.push(s[i]) ; 
        }
        if(k > 1 ) {
             sort(s.begin() , s.end()) ;
             return s; 
        }
        else {
            string best = s ;

            for(int i = 0 ; i < s.size() ; i++ ) {
                s = s.substr(1) + s[0] ;
                if(s < best) {
                    best = s ; 
                }
            }
            return best; 
        }
    }
};

