class Solution {
public:
    // Helper function to check if two characters have the same ASCII parity
    bool sameParity(char a, char b) {
        if(a % 2 == 0 && b % 2 == 0 ) { return true ;}
        else if(b % 2 != 0 && a % 2 != 0 ) {return true  ;}
        return false;
    }

    string getSmallestString(string s) {
        int n = s.size();
        for (int i = 0; i < n - 1; i++) {
            if (s[i] > s[i + 1] && sameParity(s[i], s[i + 1])) {
                swap(s[i], s[i + 1]);
                break;
            }
        }
        return s;
    }
};
