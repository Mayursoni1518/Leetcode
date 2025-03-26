class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin() , skill.end()) ;
        int n = skill.size() ;
        long long  ans = 0; 
        long long prod =1 ;
        int sum = 0 ;
        unordered_map<int,int>mp ; 
        int st = 0 ;
        int end = n - 1 ;
        while(st <= end ){
            prod = skill[st] * skill[end] ; 
            sum = skill[st] + skill[end] ;
            mp[sum]++ ;
            ans += prod ;
            st++ ;
            end-- ; 
        }
        if(mp.size() > 1 ){
            return -1 ;
        }
        return ans ; 
    }
};