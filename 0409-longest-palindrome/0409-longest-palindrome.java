class Solution {
    public int longestPalindrome(String s) {
        HashMap<Character,Integer>mp = new HashMap<>(); 
        for(int i = 0 ; i < s.length(); i++ ){
            char cc = s.charAt(i) ;
            mp.put(cc, mp.getOrDefault(cc , 0 ) + 1 ) ; 
        }
        int ans = 0 ;
        boolean isodd = false ;
        for(var entry : mp.entrySet()) {
            int freq = entry.getValue() ;
            if(freq % 2 == 0 ) {
                ans += freq; 
            }
            else{
                ans += freq - 1 ;
                isodd = true; 
            }
        }
        if(isodd) {
            ans += 1 ; 
        }
        return ans ; 
    }
}