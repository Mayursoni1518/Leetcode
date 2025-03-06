class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i = 0;
        int j = 0;
        int count = 0;
        int mini = INT_MAX;
        while (j < blocks.size()) {
            if (blocks[j] == 'W') {
                count++;
            }

            while (j - i + 1 == k) {
                mini = min(mini, count);
                if (blocks[i] == 'W')
                    count--;
                i++;
            }
            j++;
        }

        return mini;
    }
};