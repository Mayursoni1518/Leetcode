class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
        int ans=0;
        int s=0;
        for(auto i:a)
            s=s+i;
        sort(c.begin(),c.end());
        int i=c.size()-1;
        while(i>=0) {
            s=s-c[i];
            ans++;
            if(s<=0)
                break;
            i--;
        }
        return ans;
    }
};