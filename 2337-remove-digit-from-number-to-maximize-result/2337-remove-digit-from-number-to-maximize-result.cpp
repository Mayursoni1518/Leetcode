class Solution {
public:
    string removeDigit(string number, char digit) {
        string num = "" ;
        for(int i = 0 ; i<number.size() ; i++){
            if(number[i] == digit) {
                string temp = number.substr(0,i) + number.substr(i+1) ;
                num = max(num,temp) ;
            }
        }
        return num ;
    }
};