class Solution {
public:
    bool vowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    int maxVowels(string s, int k) {
        int i = 0, j = 0;
        int count = 0, maxi = 0;
        int n = s.size();

        while (j < n) {
            if (vowel(s[j])) {
                count++;  // Increase vowel count if s[j] is a vowel
            }

            if (j - i + 1 == k) {  // Check only when window size is exactly k
                maxi = max(maxi, count);

                if (vowel(s[i])) {  // If leftmost character is a vowel, remove it
                    count--;
                }
                i++;  // Slide the window
            }
            
            j++;  
        }

        return maxi;
    }
};
