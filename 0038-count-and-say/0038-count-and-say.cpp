class Solution {
public:
    string convert(char ch) {
        return std::string(1 , ch) ;
    }
    string countAndSay(int n) {
        if(n == 1)
        {
            return "1" ; 
        }
        string result  = ""; 

        string say = countAndSay(n - 1 ) ;
        for(int i = 0 ; i < say.length() ; i++) {
            char ch = say[i] ;
            int cnt = 1 ; 

            while(i < say.length() && say[i] == say[i+1] ) {
                cnt++ ;
                i++ ; 
            }

            result += to_string(cnt) + convert(ch) ;
        }
        return result ;
    }
};