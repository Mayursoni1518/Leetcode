class Solution {
    public String decodeString(String s) {
        Stack<Character>st = new Stack<>() ;
        int i = 0 ;
        char[] cc = s.toCharArray() ;  
        while(i < s.length() ) {
            if(cc[i] != ']') {
                st.push(cc[i]) ;
            }
            else if (cc[i] == ']'){
                String inside = ""; 
                while(!st.isEmpty() && st.peek() != '[' ) {
                    inside = st.pop() + inside ; 
                }
                if(!st.isEmpty() && st.peek() == '[') {
                    st.pop() ; 
                }
                String numStr = "" ;
                while(!st.isEmpty() && Character.isDigit(st.peek()) ){
                   numStr = st.pop() + numStr ; 
                }
                int repeattime = Integer.parseInt(numStr) ;
                String repeated = "" ; 
                for(int r = 0 ; r < repeattime ; r++ ) {
                    repeated += inside ; 
                }
                for(char c :repeated.toCharArray() ){
                    st.push(c) ; 
                }
            }
            i++ ; 
        }
        String result = "" ;
        while(!st.isEmpty()) {
            result = st.pop() + result  ; 
        }
        return result ; 
    }
}