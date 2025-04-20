class Solution {
public:
    long long calculateScore(vector<string>& instructions,
                             vector<int>& values) {

        int n = instructions.size();
        vector<bool> visited(n, false);
        long long score = 0;
        int i = 0;

        while (i >= 0 && i < n && !visited[i]) {
            visited[i] = true;

            if (instructions[i] == "jump") {
                i = i + values[i];
            } else {
                score += values[i];
                i++;
            }
        }

        return score;
    }
};
