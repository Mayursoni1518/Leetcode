class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size() ; 
        queue<int>Q ;

        for(int i = 0 ; i < arr.size() ; i++ ){
            Q.push(arr[i]) ;
            if(arr[i] == 0 ){
                Q.push(0) ;
            }
        }

        for(int i = 0 ; i < arr.size() ; i++ ){
            arr[i] = Q.front() ;
            Q.pop() ; 
        }
    }
};