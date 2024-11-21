class Solution {
public:
    string clearDigits(string s) {
        string result = "";  // Use a string to build the result directly
        for (char c : s) {
            if (c >= 'a' && c <= 'z') {
                result.push_back(c);  // Add the character to the result
            } else {
                if (!result.empty()) {
                    result.pop_back();  // Remove the last character if not empty
                }
            }
        }
        return result;
    }
};
