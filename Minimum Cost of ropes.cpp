class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> q;
        int i;
        for(i=0;i<n;i++)
        {
            q.push(arr[i]);
        }
        long long sum=0;
        while(q.size()>1)
        {
            long long t1=q.top();
            q.pop();
            long long t2=q.top();
            q.pop();
            sum+=t1+t2;
            q.push(t1+t2);
        }
        return sum;
    }
};
