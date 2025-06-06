class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int val = 1;
        vector<int> a;
        int i = 0;
        while (a.size() < k) {
            if (i < arr.size() && arr[i] == val) {

                i++;
            } else {

                a.push_back(val);
            }
            val++;
        }
        return a[k - 1];
    }
};