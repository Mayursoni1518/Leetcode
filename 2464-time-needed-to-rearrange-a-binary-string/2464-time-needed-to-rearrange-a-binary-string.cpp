class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n = s.size();
        int count = 0;
        while (s.find("01") != string::npos) {
            string temp = s; 
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '0' && s[i + 1] == '1') {
                    temp[i] = '1';
                    temp[i + 1] = '0';
                }
            }
            s = temp;
            count++;
        }
        return count;
    }
};