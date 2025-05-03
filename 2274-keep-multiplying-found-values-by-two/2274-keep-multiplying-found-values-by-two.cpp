class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        for(int i = 0 ; i < nums.size() ; i++ ){
            auto num =find(nums.begin() , nums.end() , original);
            if(num != nums.end()) {
                original *= 2;
            }
        }
        return original ;
    }
};

//  unordered_set<int>set(nums.begin(),nums.end());
//         while(set.find(original)!=set.end())
//         {
//             original*=2;
//         }
//         return original;