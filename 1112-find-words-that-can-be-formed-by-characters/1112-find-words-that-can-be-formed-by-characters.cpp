class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> charFreq;
        
        // Step 1: Build frequency map for chars
        for (char c : chars) {
            charFreq[c]++;
        }
        
        int result = 0;
        
        // Step 2: Check each word in words
        for (string word : words) {
            unordered_map<char, int> tempMap = charFreq; // Copy of charFreq
            bool isGood = true;
            
            for (char c : word) {
                if (tempMap[c] > 0) {
                    tempMap[c]--; // Use the character
                } else {
                    isGood = false; // Not enough characters
                    break;
                }
            }
            
            // Step 3: Add length if word is good
            if (isGood) {
                result += word.length();
            }
        }
        
        return result;
    }
};

