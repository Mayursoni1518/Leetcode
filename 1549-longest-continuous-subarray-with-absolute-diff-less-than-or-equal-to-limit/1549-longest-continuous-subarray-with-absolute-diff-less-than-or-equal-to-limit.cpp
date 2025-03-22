class Solution {
public:
    typedef pair<int,int>P;
    int longestSubarray(vector<int>& nums, int limit) {
        priority_queue<P , vector<P>>Maxi ;
        priority_queue<P , vector<P> , greater<P>>Mini ;
        int maxLen = 0;
        int i = 0 ;
        int j = 0 ;
        int n = nums.size() ;

        while(j < n ) {
            Maxi.push({nums[j] , j }) ;
            Mini.push({nums[j] , j }) ;

            while(Maxi.top().first - Mini.top().first > limit ) {
                i = min(Mini.top().second , Maxi.top().second) + 1; 

                while(Maxi.top().second < i  ) {
                    Maxi.pop() ; 
                }
                
                while(Mini.top().second < i  ) {
                    Mini.pop() ; 
                }
            }
            maxLen = max(maxLen , j - i + 1) ;
            j++ ; 
        }
        return maxLen ; 
    }
};

// another approach using multiset 
// which allow element in the sorted fasion , easy to find min , max and delete element 

// class Solution {
// public:
//     int longestSubarray(vector<int>& nums, int limit) {
//         int n = nums.size();

//         multiset<int> st;
//         int i = 0;
//         int j = 0;
//         int maxLength = 0;

//         while (j < n) {
//             st.insert(nums[j]);

//             while (*st.rbegin() - *st.begin() > limit) {
//                 st.erase(st.find(nums[i]));
//                 ++i;
//             }

//             maxLength = max(maxLength, j - i + 1);
//             j++;
//         }

//         return maxLength;
//     }
// };