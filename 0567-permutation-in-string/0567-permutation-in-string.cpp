class Solution {
public:
    bool allZero(vector<int> &counter){
        for(int &i : counter){
            if(i != 0 ){
                return false ; 
            }
        }
        return true; 
    }
    bool checkInclusion(string s1, string s2) {
        int m = s2.size() ;
        int n = s1.size() ;
        vector<int>counter(26,0);

        for(int i = 0 ; i < s1.size() ; i++) {
            counter[s1[i] - 'a']++ ; 
        }

        int i = 0 ;
        int j = 0 ;

        while(j < m ){
            counter[s2[j] - 'a']-- ; 

            if(n ==  j- i + 1) 
            {
                if(allZero(counter)){
                    return true; 
                }
                counter[s2[i] - 'a']++ ;
                i++ ; 
            }
            j++ ;
        }
        return false ;
    }
};