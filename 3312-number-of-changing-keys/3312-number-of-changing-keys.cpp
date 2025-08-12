class Solution {
public:
    int countKeyChanges(string s) {
        
        

        int n = s.size();
        int cnt = 0;

        for(int i=0;i<n-1;i++)
        {
            if(tolower(s[i]) != tolower(s[i+1])) cnt++;
        }

        return cnt;
    }
};