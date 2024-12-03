class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long ans=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    long val = (long) (nums[i] - nums[j]) *(long)nums[k];
                    if(val > ans) ans=val;
                }
            }
        }
        
        return ans;
    }
};