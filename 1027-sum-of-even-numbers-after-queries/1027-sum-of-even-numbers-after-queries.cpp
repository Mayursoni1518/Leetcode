class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums,
                                    vector<vector<int>>& queries) {
        int evenSum = 0;

        // Initial even sum
        for (int num : nums) {
            if (num % 2 == 0) {
                evenSum += num;
            }
        }

        vector<int> ans;

        for (auto& q : queries) {
            int val = q[0];
            int index = q[1];

       
            if (nums[index] % 2 == 0) {
                evenSum -= nums[index];
            }

           
            nums[index] += val;

            
            if (nums[index] % 2 == 0) {
                evenSum += nums[index];
            }

          
            ans.push_back(evenSum);
        }

        return ans;
    }
};