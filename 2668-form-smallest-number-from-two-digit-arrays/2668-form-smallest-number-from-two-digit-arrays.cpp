class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end()) ;
        sort(nums2.begin() , nums2.end()) ;
        map<int ,int> mp;
        for(auto& i : nums1){
            mp[i]++;
        }
        for(auto& i : nums2) {
            mp[i]++; 
        }
        for(auto& i :mp) {
            if(i.second > 1 ) {
                return i.first ; 
                break ; 
            } 
        }
        int ans = nums1[0] * 10 + nums2[0] ;
        int r = nums2[0] * 10 + nums1[0] ; 
        return min(ans , r) ; 
    }
};