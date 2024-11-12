class Solution {
public:
    int removePalindromeSub(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j])
                return 2;
            i++;
            j--;
        }

        return 1;
    }
};

// The idea here is pretty simple...

// If the string is a palindrome, the answer is 1 and
// If the string is not palindrome, the answer is 2, becuase:
// String s only consists of two characters 'a' and 'b',
// This implies, there always exists two different palindromic subsequence in
// the string, one consisting of all the a's and other consisting of all the
// b's. We just need to identify if there is a need to return 2 as a result or
// 1(in case of palindrome)