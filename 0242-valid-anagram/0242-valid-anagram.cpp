class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;

        for (auto i : s) {
            count[i]++;
        }
        for (auto i : t) {
            count[i]--;
        }

        for (auto x : count) {
            if (x.second != 0) {
                return false;
            }
        }
        return true;
    }
};

// int count[26] = {0};

// for (auto x : s) {
//     count[x - 'a']++;
// }
// for (auto i : t) {
//     count[i - 'a']--;
// }

// for (auto y : count) {
//     if (y != 0) {
//         return false;
//     }
// }
// return true;