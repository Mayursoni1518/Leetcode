class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int i = 0;
        int j = 0;
        int maxi = INT_MIN;
        unordered_map<int, int> mp;
        while (j < n) {
            mp[fruits[j]]++;
            while (mp.size() > 2) {
                mp[fruits[i]]--;

                if (mp[fruits[i]] == 0) {
                    mp.erase(fruits[i]);
                }
                i++;
            }
            maxi = max(maxi, j - i + 1);
            j++;
        }
        return maxi;
    }
};

// 1 - 1
// 2 - 3
// 3 - 1

//