class Solution {
public:
    int minChanges(string s) {
        int count = 0;
        for (int i = 0; i < s.size() - 1; i = i + 2) {
            if (s[i] != s[i + 1]) {
                count++;
            }
        }

        return count;
    }
};

// this is done by copy paste but undertand the question and written code !