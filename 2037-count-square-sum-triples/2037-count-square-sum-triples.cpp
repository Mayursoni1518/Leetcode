class Solution {
public:
    int countTriples(int n) {
        int r = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                for (int x = j + 1; x <= n; x++) {
                    if (i * i + j * j == x * x)
                        r += 2;
                }
            }
        }
        return r;
    }
};