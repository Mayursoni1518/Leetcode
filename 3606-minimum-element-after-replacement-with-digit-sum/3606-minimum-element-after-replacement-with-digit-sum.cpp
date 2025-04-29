class Solution {
public:
    int conv(int number ) {
        int sum = 0 ; 
        while(number != 0 ) {
            int temp = number % 10 ;
            sum = sum + temp ;
            number = number / 10 ; 
        }
        return sum ; 
    }
    int minElement(vector<int>& nums) {
        vector<int>result ; 
        for(int i = 0 ; i < nums.size() ; i++ ){
            result.push_back(conv(nums[i])) ;
        }
        return *min_element(result.begin() , result.end()) ;
    }
};