class Solution {
public:
    bool judgeSquareSum(int c) {
        int limit = sqrt(c);
        long long  i = 0;
        long long j = limit;

        while (i <= j) {
            if (i * i + j * j == c) {
                return true;
            } else if (i * i + j * j > c) {
                j--;
            } else {
                i++;
            }
        }

        return false; 
    }
};