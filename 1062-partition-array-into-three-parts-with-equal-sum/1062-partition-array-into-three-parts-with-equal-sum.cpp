class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total = accumulate(arr.begin() , arr.end() , 0 ) ;
        int cnt =0 ;
        if(total % 3 != 0 ) {
            return false ;
        }
        int partSum = total / 3 ;
        int curr = 0 ;

        for(int i = 0 ; i < arr.size() ; i++ ) {
            curr += arr[i] ;
            if(curr == partSum) {
                cnt++ ; 
                curr = 0 ; 
            }
        }
        return cnt >= 3 ; 
    }
};