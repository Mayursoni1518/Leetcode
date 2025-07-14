class Solution {
    public String reverseWords(String s) {
        Stack<String> st = new Stack<>();
        String element = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) != ' ') {
                element += s.charAt(i);
            } else {
                if (!element.equals("")) {
                    st.push(element);
                    element = "";
                }
            }
        }
        if (!element.equals("")) {
            st.push(element);
        }
        String aa = "";
        while (!st.isEmpty()) {
            aa += st.peek();
            st.pop();
            if (!st.isEmpty()) {
                aa += " ";
            }
        }
        return aa;
    }
}