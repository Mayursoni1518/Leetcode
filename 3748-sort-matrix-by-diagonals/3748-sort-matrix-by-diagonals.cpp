class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size() ; 
        unordered_map<int,vector<int>>mp ;

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++ ) {
                mp[i-j].push_back(grid[i][j]); 
            }
        }

        for(auto& i : mp ) {
            if(i.first < 0 ) {
                sort(i.second.rbegin() , i.second.rend()) ; 
            }
            else{
                sort(i.second.begin() , i.second.end()) ; 
            }
        }

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                grid[i][j] = mp[i-j].back() ;
                mp[i-j].pop_back() ;
            }
        }
        return grid ;
    }
};

// 00 01 02 
// 10 11 12 
// 20 21 22

// -1 - 7 , 2          incresing order me 
// -2 - 3  ---------


// 0 - 1 ,8, 6  ---- 
// 1 - 9 , 5        incresing order me then reverse 
// 2 - 4        -----

