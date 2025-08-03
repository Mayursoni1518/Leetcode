class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
    std::string shuffled(n, ' ');  // Initialize a string of the same size with spaces

    // Fill the shuffled string based on the given indices
    for (int i = 0; i < n; ++i) {
        shuffled[indices[i]] = s[i];
    }

    return shuffled;
}

};