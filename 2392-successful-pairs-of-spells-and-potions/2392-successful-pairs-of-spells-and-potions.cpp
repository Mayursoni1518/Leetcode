class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());
        int n = potions.size();
        for (int i = 0; i < spells.size(); i++) {
            int start = 0;
            int end = potions.size() - 1;
            int res = n;
            while (start <= end) {
                int mid = start + (end - start) / 2;
               if((long long) spells[i] * potions[mid] >= success) {
                res = mid ;
                end = mid - 1 ; 
               }
               else{
                start = mid + 1 ; 
               }
            }
            ans.push_back(n - res);
        }
        return ans;
    }
};