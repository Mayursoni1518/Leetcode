class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        if(n == 0 ) return 1;
        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0 && 
                (i == 0 || flowerbed[i - 1] == 0) && 
                (i == size - 1 || flowerbed[i + 1] == 0)) {
                
                flowerbed[i] = 1; // Plant a flower
                n--;

                if (n == 0) { // Early exit if we have placed all required flowers
                    return true;
                }

                if (n < 0) { // If n becomes negative, return false
                    return false;
                }
            }
        }

        // Check final condition after the loop
        return n == 0;
    }
};
