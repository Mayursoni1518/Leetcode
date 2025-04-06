class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>copy(arr.begin() , arr.end()) ;
        sort(copy.begin() , copy.end()) ;
        int rank = 1 ; 
        unordered_map<int,int>mp;
        for(int i = 0 ; i < copy.size() ; i++ ){
            if(mp.find(copy[i]) == mp.end() ) {
                mp[copy[i]] = rank++ ;
            }
        }
        vector<int>ans ; 
        for(int i = 0 ; i < arr.size() ; i++ ){
            ans.push_back(mp[arr[i]]) ;
        }
        return ans ;
    }
};