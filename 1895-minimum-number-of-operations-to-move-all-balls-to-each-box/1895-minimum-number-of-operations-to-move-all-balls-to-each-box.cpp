class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> answer(n, 0); // Initialize the answer vector with size `n` and all elements set to 0.
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (boxes[j] == '1') {
                    answer[i] += abs(i - j); // Add the absolute difference for each ball.
                }
            }
        }
        
        return answer; 
    }
};
