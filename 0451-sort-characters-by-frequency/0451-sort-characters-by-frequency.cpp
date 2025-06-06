class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        int n = s.size();
        vector<string> bucket(n+1, "");

        for(char x:s)  freq[x]++;
        
        for(auto& it:freq) {
            int num = it.second;
            char c = it.first;
            bucket[num].append(num, c);
        }

        string res;
        for(int i=n; i>0; i--) {
            if(!bucket[i].empty())
                res.append(bucket[i]);
        }
        return res;
    }
};