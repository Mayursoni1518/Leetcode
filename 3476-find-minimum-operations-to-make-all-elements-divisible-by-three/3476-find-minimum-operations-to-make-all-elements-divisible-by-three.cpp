class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        for(int &i:nums){
            if(i%3!=0) ans++;
        }
        return ans;
    }
};