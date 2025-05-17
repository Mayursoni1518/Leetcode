class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size() ; 
        priority_queue<int>p; 
        unordered_map<int,int>mp ;
        for(auto& i : arr) {
            mp[i]++ ;
        }

        for(auto& [key , val] : mp){
            p.push(val) ;
        }
        int sum = 0 ; 
        int cnt = 0 ; 
        while(!p.empty() ) {
            sum += p.top() ;
            p.pop() ;
            cnt++ ; 

            if(sum >= n / 2 ) {
                return cnt; 
            }
        }
        return 1 ;
    }
};