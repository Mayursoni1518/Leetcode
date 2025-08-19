class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        queue<int>q ;
        int n = arr.size() ; 

        for(int i = 0 ; i < n ; i++ )
        {
            q.push(arr[i]) ;
            if(arr[i] == 0 ) {
                q.push(0); 
            }
        }

        for(int i = 0 ; i < n ; i++) {
            arr[i] = q.front();
            q.pop(); 
        }
    }
};
