
class Solution {
public:
    bool isSymmetric(int number) {
        string str = to_string(number);
        int len = str.size();

        if (len % 2 != 0)
            return false; 

        int first = 0, sec = 0;
        for (int i = 0; i < len / 2; i++) {
            first += str[i] - '0';
            sec += str[i + len / 2] - '0';
        }
        return first == sec;
    }

    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for (int i = low; i <= high; i++) {
            if (isSymmetric(i)) {
                ans++;
            }
        }
        return ans;
    }
};
