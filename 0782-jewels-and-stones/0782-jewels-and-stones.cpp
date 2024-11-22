class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0; i < jewels.size(); i++) {
            for (int j = 0; j < stones.size(); j++) {
                if (jewels[i] == stones[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};

    // int numJewelsInStones(string J, string S) {
    //     int res = 0;
    //     unordered_set<char> setJ(J.begin(), J.end());
    //     for (char s : S)
    //         if (setJ.count(s)) res++;
    //     return res;
    // }