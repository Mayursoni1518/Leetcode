class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size(); 
        int ones = 0;
        
        // Count total number of 1s and extend the array to simulate circular behavior
        for(int i = 0; i < n; i++) {
            if(nums[i] == 1) {
                ones++;
            }
            nums.push_back(nums[i]); // duplicate the array
        }

        int maxOnes = 0;
        int count = 0;

        int i = 0;
        int j = 0;

        while(j < nums.size()) {
            if(nums[j] == 1) {
                count++;
            }

            if(j - i + 1 > ones) {
                if(nums[i] == 1) {
                    count--;
                }
                i++;
            }

            if(j - i + 1 == ones) {
                maxOnes = max(maxOnes, count);
            }

            j++;
        }

        return ones - maxOnes; // Minimum swaps = total 1s - max 1s in any window
    }
};
