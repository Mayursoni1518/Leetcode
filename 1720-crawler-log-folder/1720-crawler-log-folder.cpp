class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0 ;
        for(int i = 0 ; i < logs.size() ; i++ )
        {
            if(logs[i] == "../" ) {
                cnt -= 1 ; 
            }
            else{
                if(logs[i] != "./") {
                    cnt += 1 ; 
                }
            }
            if(cnt < 0 ){
                cnt = 0 ; 
            }
        }
        if(cnt < 0 ) {
            return 0 ; 
        }
        return cnt ; 
    }
};
// logs = ["d1/","d2/","../","d21/","./"]

