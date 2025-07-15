class Solution {
    public int compress(char[] chars) {
        int index = 0; // where to write
        int i = 0;     // where to read

        while (i < chars.length) {
            char current = chars[i];
            int count = 0;

            // count how many times current character repeats
            while (i < chars.length && chars[i] == current) {
                i++;
                count++;
            }

            // write the character
            chars[index++] = current;

            // if count > 1, write each digit of count
            if (count > 1) {
                for (char c : Integer.toString(count).toCharArray()) {
                    chars[index++] = c;
                }
            }
        }

        return index; // length of compressed array
    }
}