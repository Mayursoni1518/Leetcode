class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> result;
        unordered_map<int, int> mapp;
        sort(changed.begin(), changed.end());

        for (auto i : changed) {
            mapp[i]++;
        }

        for (int num : changed) {

            if (mapp[num] == 0)
                continue;

            if (num == 0) {
                if (mapp[num] < 2)
                    return {};
                result.push_back(0);
                mapp[num] -= 2;
            } else {
                if(mapp[num * 2] == 0) return {};

                result.push_back(num);
                mapp[num]--;
                mapp[num * 2]--;
            }
        }

        return result;
    }
};