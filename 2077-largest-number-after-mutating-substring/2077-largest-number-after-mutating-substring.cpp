class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        bool started = false;

        for (int i = 0; i < num.size(); i++) {
            int digit = num[i] - '0';
            if (change[digit] > digit) {
                num[i] = change[digit] + '0';
                started = true;
            } else if (change[digit] < digit && started) {
               
                break;
            }
        }
        return num;
    }
};
