class Solution {
public:
    bool divide(int num){
        int org = num ;
        int ans = 0 ;
        int size = to_string(num).size() ; 
        while(num != 0 ){
            int temp = num % 10 ;
            if(temp == 0 ) {
                break;
            }
            if(org % temp == 0 ){
                ans++; 
            }
            num /= 10 ; 
        }
        if(size == ans ){
            return true; 
        }
        return false ; 

    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans ; 
        for(int i = left ; i <= right ; i++ ){
            if(divide(i)){
                ans.push_back(i) ;
            }
        }
        return ans ; 
    }
};