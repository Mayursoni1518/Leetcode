class Solution {
public:
    int secondHighest(string s) {
        unordered_set<int> digits;  // Store unique digits

        // Extract digits from the string and insert into the set
        for (char c : s) {
            if (isdigit(c)) {
                digits.insert(c - '0');
            }
        }

        // Convert the set to a vector to sort and access elements by index
        vector<int> uniqueDigits(digits.begin(), digits.end());
        if (uniqueDigits.size() < 2) {
            return -1;  // Less than two unique digits
        }

        // Sort digits in descending order
        sort(uniqueDigits.begin(), uniqueDigits.end(), greater<int>());

        // Return the second largest element
        return uniqueDigits[1];
    }
};

// class Solution {
// public:
//     int secondHighest(string s) {
//         int res[2] = {-1, -1};
//         for (char c: s) {
//             if (c >= '0' && c <= '9') {
//                 c -= '0';
//                 if (c > res[0]) {
//                     res[1] = res[0];
//                     res[0] = c;
//                 } else if (c != res[0] && c > res[1]) res[1] = c;
//             }
//         }
//         return res[1];
//     }
// };
