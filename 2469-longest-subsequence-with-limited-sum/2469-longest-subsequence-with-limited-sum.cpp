class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        vector<int>Prefixans ;
        int n = nums.size();
         for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            Prefixans.push_back(sum);
        }

        vector<int> result;
        for (auto& query : queries) {
            int left = 0;
            int right = n - 1;
            int ans = 0;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (Prefixans[mid] <= query) {
                    ans = (mid + 1);
                    left++;
                } else {
                    right--;
                }
               
               
            }
            result.push_back(ans);
        }
        return result;
    }
};
