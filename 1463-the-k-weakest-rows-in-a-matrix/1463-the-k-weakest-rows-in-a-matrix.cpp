class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>ans ;

        for(int i = 0 ; i < mat.size(); i++){
            int strength = accumulate(mat[i].begin(), mat[i].end() , 0 ) ;
            ans.push_back({strength , i }) ;
        }
        sort(ans.begin() , ans.end()) ;
        vector<int>result ;
        for(int i = 0 ; i < k ; i++){
            result.push_back(ans[i].second) ;
        }
        return result ;
    }
};