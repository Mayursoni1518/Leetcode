class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size() ;
        priority_queue<int>pq(gifts.begin() , gifts.end()) ; 
        while(k != 0 ) {
            int top = pq.top();
            pq.pop() ;

            top = floor(sqrt(top)) ;
            pq.push(top) ;
            k-- ;
        }
        long long sum = 0 ; 
        while(!pq.empty()) {
            sum += pq.top(); 
            pq.pop() ; 
        }
        return sum; 
    }
};