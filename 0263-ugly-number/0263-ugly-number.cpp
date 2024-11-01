class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0)
            return 0;
        if (n == 1)
            return 1;

        while (n % 2 == 0) {
            n /= 2;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 5 == 0) {
            n /= 5;
        }

        return n == 1;
    }
};

// using just one loop ->
// bool isUgly(int n) {
//         if (n <= 0) return false; // Ugly numbers are positive by definition
//         if (n == 1) return true;  // 1 is considered an ugly number

//         for (int i = 2; i <= 5; ++i) {
//             while (n % i == 0) {
//                 n /= i;  // Divide n by 2, 3, or 5 as long as it's divisible
//             }
//         }

//         return n == 1;  // If n reduces to 1, it’s an ugly number; otherwise,
//         it’s not