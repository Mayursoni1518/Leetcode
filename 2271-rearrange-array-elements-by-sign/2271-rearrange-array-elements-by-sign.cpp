class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> demo;
    vector<int> ans; 

    // Separate even and odd numbers
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= 0) {
            demo.push_back(nums[i]);
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < 0 ) { // Handle negative odd numbers
            demo.push_back(nums[i]);
        }
    }

    int n = demo.size(); 
    for (int i = 0; i < n / 2; i++) {
        ans.push_back(demo[i]);      // First half (evens)
        ans.push_back(demo[i + n/2]); // Second half (odds)
    }

    return ans; 
    }
};