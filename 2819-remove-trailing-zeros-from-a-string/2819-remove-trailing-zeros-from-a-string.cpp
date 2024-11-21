class Solution {
public:
    string removeTrailingZeros(string num) {
        int end = num.size() - 1 ;

        while(end >= 0 && num[end] == '0'){
            end-- ;
        }

        return num.substr(0,end+1) ; 
    }
};