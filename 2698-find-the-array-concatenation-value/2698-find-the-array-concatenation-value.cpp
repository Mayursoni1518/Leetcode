class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int st =0 ;
        int end = nums.size() - 1;
        long ans = 0 ;
        string one  ;
        while(st <= end ){
            if(st == end ){
                ans += nums[st] ;
            }
            else{
                one = to_string(nums[st]) + to_string(nums[end]) ; 
                ans += stoi(one) ;
            }
            st++ ;
            end-- ; 
        }
        return ans ; 
    }
};