class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<double> pq(nums.begin(), nums.end());
        long long score = 0;
        while (k != 0 ) {
            double top = pq.top();
            pq.pop();

            score += top ;
            top = ceil(top / 3 ) ;
            pq.push(top) ; 
            k-- ; 
        }
        return score;
    }
};