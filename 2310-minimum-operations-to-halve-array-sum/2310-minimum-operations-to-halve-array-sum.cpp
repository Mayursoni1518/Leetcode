class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum = accumulate(nums.begin(), nums.end(), 0.0);
        double target = sum / 2.0;
        priority_queue<double> pq(nums.begin(), nums.end());

        int ops = 0;
        
        while (sum > target) {
            double top = pq.top();
            pq.pop();
            double half = top / 2.0;
            sum -= half;
            pq.push(half);
            ops++;
        }
        return ops;
    }
};