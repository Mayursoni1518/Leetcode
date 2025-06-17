class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double , long long>mp ;
        long long cnt = 0 ; 
        for(auto& i : rectangles) 
        {
            double ratio = (double)i[0] / (double)i[1] ;
            cnt += mp[ratio] ;
            mp[ratio]++ ; 
        }
        return cnt ;
    }
};
