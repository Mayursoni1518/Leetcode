class Solution
{
    public:
    int convertTime(string current, string correct)
    {
        int h1 = stoi(current.substr(0, 2));
        int m1 = stoi(current.substr(3));
        
        int h2 = stoi(correct.substr(0, 2));
        int m2 = stoi(correct.substr(3));
        
        int diffMins = (h2*60+m2) - (h1*60+m1);        
        
        int count = 0;
        
        vector<int> ops = {60,15,5,1};
        for (auto op: ops)
        {
            if (diffMins >= op)
            {
                count += diffMins/op;
                diffMins = diffMins%op;
            }
        }
        
        return count;
    }
};