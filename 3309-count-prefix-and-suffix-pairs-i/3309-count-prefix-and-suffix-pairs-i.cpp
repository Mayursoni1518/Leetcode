class Solution {
public:
    bool isPrefixAndSuffix(const string& s1, const string& s2) {
        int n1 = s1.size();
        int n2 = s2.size();

        if (n1 > n2) return false;

       
        if (s2.substr(0, n1) != s1) return false;

        
        if (s2.substr(n2 - n1, n1) != s1) return false;

        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0;
        for (int i = 0; i < words.size() - 1; i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
