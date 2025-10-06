class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size() ;
        int i = 0 ;
        int cnt = 0 ;
        int sum = 0 ;
        int j = 0 ;
        while(j < n ) {
            sum += arr[j] ;
            while(j - i + 1 == k ) {
                if(sum / k >= threshold){
                    cnt++; 
                }
                sum -= arr[i] ;
                i++; 
            } 
            j++ ; 
        }
        return cnt ;
    }
};