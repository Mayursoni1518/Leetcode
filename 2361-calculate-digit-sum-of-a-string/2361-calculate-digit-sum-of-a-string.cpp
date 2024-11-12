class Solution {
public:
    string digitSum(string s, int k) {
        while (s.size() > k) {
            string newnumber = ""; // This will store the new transformed string
                                   // for each round.
            for (int i = 0; i < s.size(); i += k) {
                int sum = 0;
                // Calculate the sum for the current group of size `k`.
                for (int j = i; j < i + k && j < s.size(); j++) {
                    sum += s[j] - '0'; // Convert character to integer.
                }
                newnumber += to_string(
                    sum); // Append the sum as a string to `newnumber`.
            }
            s = newnumber; // Update `s` to be the new transformed string.
        }
        return s;
    }
};
