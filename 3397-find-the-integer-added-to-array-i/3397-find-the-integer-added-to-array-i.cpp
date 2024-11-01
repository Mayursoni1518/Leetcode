class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end()); 
        sort(nums2.begin() , nums2.end()) ;

        int n = nums1.size(); 
        return nums2[n-1] - nums1[n-1] ;
    }
};



// class Solution {
// public:
//     int addedInteger(vector<int>& nums1, vector<int>& nums2) {
//         int max1=-1,max2=-1;
//         for(int i=0;i<nums1.size();i++){
//             max1=max(nums1[i],max1);
//             max2=max(nums2[i],max2);
//         }

//         return max2-max1;

//     }
// };