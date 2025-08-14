class Solution {
public:
    string largestGoodInteger(string num) {
        int number = 0, maxNum = -1;

        for (int i = 1; i < num.size() - 1; i++) 
        {
            if (num[i] == num[i + 1] && num[i - 1] == num[i]) 
            {
                number = num[i] - '0';
                maxNum = max(number * 100 + number * 10 + number, maxNum);
            }
        }

        if (maxNum == -1)
            return "";
        else if (maxNum == 0)
            return "000";
        else
            return to_string(maxNum);
    }
};