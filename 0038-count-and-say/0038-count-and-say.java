class Solution {
    public String countAndSay(int n) {
        if(n == 1 ){
            return "1" ; 
        }

        
        String say = countAndSay(n-1) ; 
        String result = "" ;
        for(int i = 0 ; i < say.length(); i++) {
            char cc = say.charAt(i) ;
            int cnt = 1 ; 
            while(i < say.length() -1 && say.charAt(i) == say.charAt(i+1) ) {
                cnt++ ;
                i++; 
            }
            result += String.valueOf(cnt) + String.valueOf(cc) ;
        }
        return result ;
    }
}