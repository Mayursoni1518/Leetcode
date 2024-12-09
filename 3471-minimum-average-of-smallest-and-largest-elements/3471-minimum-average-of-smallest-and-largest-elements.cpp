class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int st = 0 ;
        int end = nums.size() -1 ;
        double ans = INT_MAX ; 
        sort(nums.begin() , nums.end()) ;
        while(st < end ){
            double sum = nums[st] + nums[end] ;
            st++ ;
            end--; 
            double avg = sum / 2; 
            ans = min(ans, avg) ; 
        }
        return ans; 
    }
};