class Solution {
public:

int findPivot(vector<int>& nums) {
    int st = 0, end = nums.size() - 1;
    while (st < end) {
        int mid = st + (end - st) / 2;
        if (nums[mid] > nums[end]) {
            st = mid + 1;
        } else {
            end = mid;
        }
    }
    return st; // Index of the pivot (smallest element)
}

    int binarySearch(vector<int>& nums, int st, int end, int target) {
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) st = mid + 1;
        else end = mid - 1;
    }
    return -1; // Element not found
}

// Function to search for target in rotated sorted array
int search(vector<int>& nums, int target) {
    int n = nums.size();
    if (n == 0) return -1;

    int pivot = findPivot(nums);

    // If the array is not rotated, do normal binary search
    if (pivot == 0 || nums[pivot] > nums[pivot - 1]) {
        return binarySearch(nums, 0, n - 1, target);
    }

    // Search in left or right part of the pivot
    if (target >= nums[pivot] && target <= nums[n - 1]) {
        return binarySearch(nums, pivot, n - 1, target);
    } 
    return binarySearch(nums, 0, pivot - 1, target);
}
};