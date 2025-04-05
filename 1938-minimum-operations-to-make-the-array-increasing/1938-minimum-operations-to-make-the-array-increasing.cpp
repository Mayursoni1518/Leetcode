class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>rec(nums.begin() , nums.end()) ;
        int sum = 0 ;
        for(int i = 1 ; i < nums.size() ; i++ ){
            if(rec[i] <= rec[i-1]) {
                sum += (rec[i-1] + 1 - rec[i] ) ;
                rec[i] = rec[i-1] + 1; 
            }
        }
        return sum ; 
    }
};