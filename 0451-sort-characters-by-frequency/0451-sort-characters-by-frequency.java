class Solution {
    public String frequencySort(String s) {
        HashMap<Character,Integer>mp = new HashMap<>() ;

        for(char c : s.toCharArray()) {
            mp.put(c , mp.getOrDefault(c , 0) + 1 ); 
        }
        int n = s.length() ; 
        StringBuilder[] str = new StringBuilder[n+1];
        for(int i = 0 ; i <= n ; i++ ) {
            str[i] = new StringBuilder() ; 
        }

        for(var e : mp.entrySet()) {
            char r = e.getKey() ;
            int val = e.getValue() ;

            str[val].append(String.valueOf(r).repeat(val)) ;  
        }

        StringBuilder res = new StringBuilder() ;
        for(int i = n ; i > 0 ; i-- ) {
            if(str[i].length() > 0 ) {
                res.append(str[i]) ; 
            }
        }
        return res.toString() ; 
        
    }
}