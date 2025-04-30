class Solution {
public:
    int count(int num ){
        int ans = 0 ; 
        while(num != 0 ) {
            int temp = num % 10 ;
            ans += 1 ;
            num = num / 10 ; 
        }
        return ans ; 
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size() ;
        int cnt = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++ ){
            int number = count(nums[i]) ;
            if(number % 2 == 0 ) {
                cnt++ ; 
            }
        }
        return cnt; 
    }
};