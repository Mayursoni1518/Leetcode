class Solution {
public:
    int hIndex(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int h = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= i + 1) {
                h = i + 1;
            } else {
                break;
            }
        }
        return h;
    }
};



// class Solution {
// public:
//     int hIndex(vector<int>& nums) {
//         sort(nums.begin() , nums.end()) ; 
//         reverse(nums.begin() , nums.end()) ;
//         for(int i = 0 ; i < nums.size() ; i++ ) {
//             if(nums[i] -1 == i ) {
//                 return nums[i] ;
//             } 
//         }
//         return 1 ; 
//     }
// };
