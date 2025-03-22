class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int alwaysSatisfied = 0;

        // Customers always satisfied when owner is not grumpy
        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                alwaysSatisfied += customers[i];
            }
        }

        // Sliding window to find max customers we can satisfy using the secret technique
        int extraSatisfied = 0;
        int maxExtraSatisfied = 0;

        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 1) {
                extraSatisfied += customers[i];
            }

            if (i >= minutes) {
                if (grumpy[i - minutes] == 1) {
                    extraSatisfied -= customers[i- minutes];
                }
            }

            maxExtraSatisfied = max(maxExtraSatisfied, extraSatisfied);
        }

        return alwaysSatisfied + maxExtraSatisfied;
    }
};



// class Solution {
// public:
//     int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
//         int currUn = 0;
//         int maxiUn = 0;
//         int n = customers.size();

//         for (int i = 0; i < minutes; i++) {
//             currUn += customers[i] * grumpy[i];
//         }
//         maxiUn = currUn;

//         int i = 0;
//         int j = minutes;

//         while (j < n) {
//             currUn += customers[j] * grumpy[j];
//             currUn -= customers[i] * grumpy[i];
//             maxiUn = max(maxiUn, currUn);
//             i++;
//             j++;
//         }

//         int total = maxiUn;

//         for (int i = 0; i < n; i++) {
//             if (grumpy[i] == 0) {
//                 total += customers[i];
//             }
//         }

//         return total;
//     }
// };
