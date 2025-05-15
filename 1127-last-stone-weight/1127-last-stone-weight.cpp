class Solution
{
    public:
    int lastStoneWeight(vector<int>& stones)
    {
      priority_queue<int> q;
      for(int i=0;i<stones.size();i++)
      {
        q.push(stones[i]);
      }   
      while(q.size()>1)
      {
        int firstw=q.top(); q.pop();
        int secondw=q.top(); q.pop();
        int w=firstw-secondw;
        if(w)
        q.push(w);
      }
      return q.empty()?0:q.top();
    }
};