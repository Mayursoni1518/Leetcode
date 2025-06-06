class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int p1 = 0 ;
        int p2  = 0 ;
        int n = nums1.size() ;
        vector<int>ans ;
        int m = nums2.size() ;
        while(p1 < n && p2  < m ) 
        {
            if(nums1[p1] < nums2[p2]) {
                ans.push_back(nums1[p1++]) ; 
            }
            else
            {
                ans.push_back(nums2[p2++]) ;
            }
        }

        while(p1 < n ){
            ans.push_back(nums1[p1++]) ; 
        }
        while(p2 < m) {
            ans.push_back(nums2[p2++])  ;
        }
        int size = ans.size() ;
        int mid = size / 2 ;
        if(size % 2 == 0 ) {
            return (ans[mid] + ans[mid-1]) / 2.0 ; 
        }

        return ans[mid]; 
    }
};