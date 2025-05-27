class Solution {
public:
    int sum(int n) {
        int sum = 0;
        while (n != 0) {
            int temp = n % 10;
            sum += temp;
            n /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxi = -1;
        for (int num : nums) {
            int key = sum(num);

            if (mp.find(key) != mp.end()) {
                int val = mp[key] + num;
                if (val > maxi) {
                    maxi = max(maxi, val);
                }
                  mp[key] = max(mp[key], num);  
            } else {
                mp[key] = num;
            }
        }
        return maxi ; 
    }
};

// 7 13 18 36 43 [7 4 9 9 7]
