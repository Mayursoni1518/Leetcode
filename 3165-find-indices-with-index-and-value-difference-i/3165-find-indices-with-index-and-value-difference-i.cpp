class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference,
                            int valueDifference) {
        int st = 0 ;
        int end = st;

        while (st < nums.size() && end < nums.size()) {
            if (abs(st - end) >= indexDifference &&
                abs(nums[st] - nums[end]) >= valueDifference) {
               return {st,end} ;
            }
            else if(end < nums.size() - 1 ){
                end++ ; 
            }
            else{
                st++ ; 
                end = st ;
            }
        }
        return {-1,-1} ;
    }
};