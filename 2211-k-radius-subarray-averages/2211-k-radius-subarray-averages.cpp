class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size() ; 
        vector<int>result(n,-1) ;
        if(k == 0 ) {
            return nums ; 
        }
        if(n < 2 *k  + 1) {
            return result ; 
        }

        int left = 0 ;
        int right = 2 * k ; 
        int i = k  ;
        long long windowSum = 0 ; 
        for(int i = left ; i <= right ; i++ ) {
            windowSum += nums[i] ;
        }
        result[i] = windowSum / (2 * k + 1) ; 
        i++; 
        right++ ;

        while(right < n ) {
            int newJ = nums[right] ;
            int oldJ = nums[left] ;

            windowSum = windowSum + newJ - oldJ ; 
            result[i] = windowSum /  (2 * k + 1 ); 

            i++ ;
            left++; 
            right++ ; 
        }
        return result ; 
    }
};