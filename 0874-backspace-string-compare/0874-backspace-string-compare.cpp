class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ss; 
        for(auto ch : s){
            if(ch == '#'){

                if(!ss.empty()){
                    ss.pop_back() ;
                }
            }
            else{
                ss += ch ; 
            }
        }
        string tt; 
        for(auto ch : t){
            if(ch == '#'){

                if(!tt.empty()){
                    tt.pop_back() ;
                }
            }
            else{
                tt += ch ; 
            }
        }

        if(ss == tt ){
            return true; 
        }

        return false; 
    }
};