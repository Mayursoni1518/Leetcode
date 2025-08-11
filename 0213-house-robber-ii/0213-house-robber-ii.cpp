class Solution {
public:
    int calculate(vector<int>& nums){
        int prev = nums[0] ;
        int prev2 = 0;
        int n = nums.size(); 

        for(int i = 1 ; i< n ; i++)
        {
            int take = nums[i] ;
            if(i > 1 ){
                take += prev2 ; 
            }
            int not_take = 0 + prev; 
            int curri = max(take , not_take) ;
            prev2 = prev; 
            prev = curri ;
        }
        return prev; 
    } 
    int rob(vector<int>& arr) {
        vector<int>temp1 , temp2 ;
        int n = arr.size() ;
        if(n == 1) {
            return arr[0] ; 
        }
        for(int i = 0 ; i < n ; i++ ) {
            if(i != 0 ){
                temp1.push_back(arr[i]) ; 
            }
            if(i != n - 1 ){
                temp2.push_back(arr[i]) ;
            }
        }
        return max(calculate(temp1) , calculate(temp2)) ; 
    }
};