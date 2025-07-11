class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for (auto& ch : s) {
            mp[ch]++;
        }
        for (auto& ch : t) {
            if(mp[ch] > 0 ) {
                mp[ch]-- ;
            }
            else{
                return false ;
            }
        }
        for (auto& i : mp) {
            if (i.second >= 1) {
                return false;
            }
        }
        return true;
    }
};