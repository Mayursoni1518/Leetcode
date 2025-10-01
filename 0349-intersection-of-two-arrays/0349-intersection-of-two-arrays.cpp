class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1 ;
        vector<int>ans; 
        set<int>st2;

        for(auto& i : nums1) {
            st1.insert(i); 
        }
        for(auto& i : nums2) {
            st2.insert(i) ; 
        }
        for(auto& i : st2) {
            if(st1.count(i)) {
                ans.push_back(i) ;
            }
        }
        return ans;
    }
};