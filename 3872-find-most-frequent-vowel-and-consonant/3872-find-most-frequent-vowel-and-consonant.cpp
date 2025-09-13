class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int vowmax=0;
        int conmax=0;
        for(auto it : mp)
        {
            if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u')
            {
                  vowmax=max(vowmax,it.second);
            }
            else
            {
                conmax=max(conmax,it.second);
            }
        }
        return vowmax+conmax;
    }
};