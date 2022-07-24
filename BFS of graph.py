class Solution:
    
    #Function to return Breadth First Traversal of given graph.
    def bfsOfGraph(self, V, adj):
        # code here
        v=[]
        for i in range(0,V,1):
            v.append(-1)
        q=[]
        r=[]
        r.append(0)
        q.append(0)
        v[0]=1
        while len(q)!=0:
            s=q[0]
            q.pop(0)
            for i in range(0,len(adj[s]),1):
                if v[adj[s][i]]==-1:
                    q.append(adj[s][i])
                    r.append(adj[s][i])
                    v[adj[s][i]]=1
        return r
