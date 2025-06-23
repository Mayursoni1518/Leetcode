class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if (password.size() < 8) {
            return false;
        }
        string big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string low = "abcdefghijklmnopqrstuvwxyz";
        string digit = "0123456789";
        string special = "!@#$%^&*()-+";

        bool bigg = false;
        bool loww = false;
        bool digitt = false;
        bool spe = false;

        for (int i = 0; i < password.size(); i++) {
            if (i + 1 < password.size() && password[i] == password[i + 1]) {
                return false;
            }
            if (big.find(password[i]) != string::npos) {
                bigg = true;
            }
            if (low.find(password[i]) != string::npos) {
                loww = true;
            }
            if (digit.find(password[i]) != string::npos) {
                digitt = true;
            }
            if (special.find(password[i]) != string::npos) {
                spe = true;
            }
        }

        return bigg && loww && digitt && spe;
    }
};