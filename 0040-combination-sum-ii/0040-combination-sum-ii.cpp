class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result ;
        vector<int>temp ;
        sort(candidates.begin() , candidates.end()) ;
        solve(candidates , target , result , temp , 0 ) ;
        return result ; 
    }

    void solve(vector<int>& candidates, int target , vector<vector<int>> &result,
        vector<int> &temp, int idx) {
            if(target == 0 ) {
                result.push_back(temp); 
                return ;
            } 
            if(target < 0 || idx > candidates.size()){
                return ; 
            }
            for(int i = idx ; i < candidates.size() ; i++ ){
                if( i > idx &&  candidates[i] == candidates[i-1]){
                    continue ; 
                }

                temp.push_back(candidates[i]) ;
                solve(candidates , target - candidates[i] , result , temp , i + 1) ;
                temp.pop_back() ; 
            }
        }
};


// this solution is for without using for loop and remove the duplicate element --> 
// class Solution {
// public:
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         vector<vector<int>> result;
//         vector<int> temp;
//         sort(candidates.begin(), candidates.end());  // Sort to handle duplicates
//         solve(result, temp, candidates, target, 0);
//         return result;
//     }
    
//     void solve(vector<vector<int>>& result, vector<int>& temp,
//                vector<int>& candidates, int target, int idx) {
//         if (target == 0) {
//             result.push_back(temp);
//             return;
//         }
//         if (idx >= candidates.size() || target < 0) {
//             return;
//         }

//         // Include the current element
//         temp.push_back(candidates[idx]);
//         solve(result, temp, candidates, target - candidates[idx], idx + 1);
//         temp.pop_back();

//         // Skip all duplicate elements
//         int nextIdx = idx + 1;
//         while (nextIdx < candidates.size() && candidates[nextIdx] == candidates[idx]) {
//             nextIdx++;
//         }

//         // Exclude the current element and move to the next unique element
//         solve(result, temp, candidates, target, nextIdx);
//     }
// };
