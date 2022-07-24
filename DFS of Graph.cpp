class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        stack<int> a;
        int i,c=0;
        vector<int> v,r;
        for(i=0;i<V;i++)
        {
            v.push_back(-1);
        }
        a.push(0);
        c++;
        while(a.size()!=0)
        {
            int top=a.top();
            v[top]=0;
            r.push_back(top);
            a.pop();
            c++;
            for(i=adj[top].size()-1;i>=0;i--)
            {
                if(v[adj[top][i]]==-1)
                {
                    a.push(adj[top][i]);
                }
            }
            if(c==V+1)
            {
                break;
            }
        }
        return r;
    }
};
