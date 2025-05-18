class Solution {
public:
    int reverse(int number ){
        int rev = 0;
        while(number != 0) {
            int digit = number % 10;
            rev += digit ; 
            number /= 10;
        }
        return rev;
    }

    int smallestIndex(vector<int>& nums) {
        for(int i = 0 ; i < nums.size(); i++ ){
            if(i == reverse(nums[i])){
                return i;
            }
        }
        return -1;
    }
};