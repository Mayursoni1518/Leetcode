class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false; // Strings must be of the same length to be isomorphic
        }
        unordered_map<char, char> map1, map2;
        for (int i = 0; i < s.size(); i++) {
            // Check if there is a mapping conflict in the first string
            if (map1.find(s[i]) != map1.end()) {
                if (map1[s[i]] != t[i]) {
                    return false;
                }
            } else {
                map1[s[i]] = t[i];
            }
            // Check if there is a mapping conflict in the second string
            if (map2.find(t[i]) != map2.end()) {
                if (map2[t[i]] != s[i]) {
                    return false;
                }
            } else {
                map2[t[i]] = s[i];
            }
        }

        return true;
    }
};

// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         vector<int> indexS(200, 0); // Stores index of characters in string s
//         vector<int> indexT(200, 0); // Stores index of characters in string t
        
//         int len = s.length(); // Get the length of both strings
        
//         if(len != t.length()) { // If the lengths of the two strings are different, they can't be isomorphic
//             return false;
//         }
        
//         for(int i = 0; i < len; i++) { // Iterate through each character of the strings
//             if(indexS[s[i]] != indexT[t[i]]) { // Check if the index of the current character in string s is different from the index of the corresponding character in string t
//                 return false; // If different, strings are not isomorphic
//             }
            
//             indexS[s[i]] = i + 1; // updating position of current character
//             indexT[t[i]] = i + 1;
//         }
        
//         return true; // If the loop completes without returning false, strings are isomorphic
//     }
// };