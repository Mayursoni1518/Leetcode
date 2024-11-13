class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size(); 
        
        // Define the initial score from the first two elements
        int number = nums[0] + nums[1];
        int count = 0; 

        // Perform operations as long as there are at least two elements
        while (nums.size() >= 2) {
            // Check if the sum of the first two elements matches the target score
            if (nums[0] + nums[1] == number) {
                count++; // Increment count if the score matches
            } else {
                break; // Stop if the score doesn't match
            }
            
            // Erase the first two elements
            nums.erase(nums.begin(), nums.begin() + 2);
        }

        return count;
    }
};