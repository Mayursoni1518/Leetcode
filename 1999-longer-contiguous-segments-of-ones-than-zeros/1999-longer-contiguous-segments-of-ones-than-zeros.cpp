class Solution {
public:
    int one(string s) {
        int count1 = 0;
        int maxi = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                count1++;
                maxi = max(maxi, count1);
            } else {
                count1 = 0;
            }
        }
        return maxi;
    }

    int zero(string s) {
        int count0 = 0;
        int maxi = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                count0++;
                maxi = max(maxi, count0);
            } else {
                count0 = 0;
            }
        }
        return maxi;
    }

    bool checkZeroOnes(string s) {
        return one(s) > zero(s);
    }
};
