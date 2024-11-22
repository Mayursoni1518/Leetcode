class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array
        int left = 0;
        int right = nums.size() - 1;
        unordered_set<double> sett; // Use double for precise average storage
        
        while (left < right) {
            double avg = (nums[left] + nums[right]) / 2.0; // Calculate average
            sett.insert(avg); // Insert into the set
            left++;
            right--;
        }

        return sett.size(); // Return the size of the set
    }
};
