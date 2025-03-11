class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.length();
        int result = 0;
        //First pass for flipping 'F' -> 'T'
        
        int i = 0, j = 0;
        int countF = 0;
        while(j < n) {
            if(answerKey[j] == 'F')
                countF++;
            
            while(countF > k) {
                if(answerKey[i] == 'F')
                    countF--;
                i++;
            }
            
            result = max(result, j-i+1);
            
            j++;
        }
        
        i = 0, j = 0;
        int countT = 0;
        while(j < n) {
            if(answerKey[j] == 'T')
                countT++;
            
            while(countT > k) {
                if(answerKey[i] == 'T')
                    countT--;
                i++;
            }
            
            result = max(result, j-i+1);
            j++;
        }
        
        
        return result;
    }
    
};

// Using Brute Force appraoch used Sliding window Got TLE => 

//Approach-1 (Simple Brute Force) - O(n * 2^n)
// class Solution {
// public:
//     int ans = 0;
//     int n;
    
//     void findMax(string answerKey) {
//         int length = 0;
        
//         int i = 0;

//         while(i < n) {
            
//             if(answerKey[i] == 'T') {
//                 length = 1;
//                 i++;
//                 while(i < n && answerKey[i] == 'T') {
//                     length++;
//                     i++;
//                 }
//                 ans = max(ans, length);
//             } else {
//                 length = 1;
//                 i++;
//                 while(i < n && answerKey[i] == 'F') {
//                     length++;
//                     i++;
//                 }
//                 ans = max(ans, length);
//             }
            
//         }
//     }
    
//     void solve(int idx, string &answerKey, int k) {
        
//         findMax(answerKey);
        
//         if(idx >= n || k <= 0) {
//             return;
//         }
        
//         answerKey[idx] = answerKey[idx] == 'T' ? 'F' : 'T'; //Flipped
        
//         solve(idx+1, answerKey, k-1);
        
//         answerKey[idx] = answerKey[idx] == 'T' ? 'F' : 'T'; //Flipped back
//         solve(idx+1, answerKey, k);
        
//     }
    
//     int maxConsecutiveAnswers(string answerKey, int k) {
//         n = answerKey.length();
        
//         solve(0, answerKey, k);
        
//         return ans;
//     }
// };


//Approach-3 (Using One Pass Sliding Window)
// class Solution {
// public:
//     int maxConsecutiveAnswers(string answerKey, int k) {
//         int result = k;
        
//         unordered_map<char, int> mp;

//         int i = 0;
//         for (int j = 0; j < answerKey.length(); j++) {

//             mp[answerKey[j]]++;
            
//             while (min(mp['T'], mp['F']) > k) {
//                 mp[answerKey[i]]--;
//                 i++;
//             }
            
//             result = max(result, j - i + 1);
//         }
        
//         return result;
//     }
// };

// in the last solution => 

// we are first setlle in the window in which we will count of F and T and for minimum count which is equal to the k fill the T & F though 

// min of T in the window = 2 ;
// min of F in the window = 3 ;
// stop bcz k = 2 ;

// now j - i + 1 = store the size now
// now if size exceed minimize of window and reduce the count 