class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> mp;
         for(int i = 0 ; i < heights.size() ; i++)
         {
            mp[heights[i]] = names[i] ; 
         }

        sort(heights.rbegin() , heights.rend()) ;

        for(int i = 0 ; i < names.size() ; i++ )
        {
            names[i] = mp[heights[i]] ; 
        }
        return names;
    }
};