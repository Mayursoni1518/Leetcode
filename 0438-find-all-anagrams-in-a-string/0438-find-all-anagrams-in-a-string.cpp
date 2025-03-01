class Solution {
public:
    bool allZeros(vector<int> &counter){
        for(int &i : counter){
            if(i != 0 ){
                return false ;
            }
        }
        return true; 
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>counter(26,0) ;
        int n = s.size() ; 
        vector<int>ans; 
        int k = p.size() ;

        for(int i = 0 ; i <k ; i++ ){
            counter[p[i] - 'a']++ ; 
        }

        int i = 0 ;
        int j = 0 ;

        while(j < n ){
            counter[s[j] - 'a']-- ;

            if(k == j-i+1){
                if(allZeros(counter)){
                    ans.push_back(i) ;
                }

                counter[s[i] - 'a']++ ;
                i++ ; 
            }
            j++ ; 
        }
        return ans ;
    }
};