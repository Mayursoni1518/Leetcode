class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        if(nums.size() < 2 ) return -1 ; 
        priority_queue<long long int,vector<long long int>, greater<long long int>> pq; 
        for(auto i : nums){
            pq.push(i) ;
        }
        long long int cnt = 0 ;
        while(pq.top() < k ){
            long long int first = pq.top(); 
            pq.pop() ;

            long long int second = pq.top() ;
            pq.pop() ; 

            long long add = min(first , second ) * 2 + max(first , second ) ;
            pq.push(add) ;
            cnt++;
        }
        return cnt ; 
    }
};