class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(), cost.rend()); // Sort in descending order
        
        int totalCost = 0;

        for (int i = 0; i < cost.size(); ++i) {
      
            // Add cost of candies that are not free
            if (i % 3 != 2) { // Every third candy (0-based indexing) is free
                totalCost += cost[i];
            }
        }

        return totalCost;
    }
};
