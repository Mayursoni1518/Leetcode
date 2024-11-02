#include <string>

class Solution {
public:
    bool isCircularSentence(std::string sentence) {
        int n = sentence.size();

        // Check if the last character of the sentence is equal to the first
        // character
        if (sentence[0] != sentence[n - 1]) {
            return false;
        }

        // Traverse through the sentence to check each word boundary
        for (int i = 1; i < n; ++i) {
            // If we find a space, check if the last character of the previous
            // word matches the first character of the next word
            if (sentence[i] == ' ') {
                if (sentence[i - 1] != sentence[i + 1]) {
                    return false;
                }
            }
        }

        return true;
    }
};
