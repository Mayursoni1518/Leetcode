class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i = 0 ;
       int j = 0 ;
       sort(nums1.begin() , nums1.end() ) ;
       for(int i = 0 ; i < nums1.size() ; i++ && j < n ) {
         if(nums1[i] == 0 && j < n  ) {
            nums1[i] = nums2[j] ; 
            j++ ;
         }
       }
       sort(nums1.begin() , nums1.end()) ; 
    }
};
// [-1,0,0]