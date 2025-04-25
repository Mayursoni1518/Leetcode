class Solution {
public:
    string largestMerge(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        int i = 0, j = 0;
        string result;

        while (i < n && j < m) {
            if (word1.substr(i) > word2.substr(j)) {
                result += word1[i++];
            } else {
                result += word2[j++];
            }
        }

        while (i < n) result += word1[i++];
        while (j < m) result += word2[j++];

        return result;
    }
};
