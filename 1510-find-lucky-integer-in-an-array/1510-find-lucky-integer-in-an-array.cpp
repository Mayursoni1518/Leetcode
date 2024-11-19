class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> hg;
        unordered_map<int,int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(auto num:freq){
            if(num.first==num.second)hg.push_back(num.first);
        }
        if(hg.size()>0)return *max_element(hg.begin(),hg.end());
        return -1;
    }
};