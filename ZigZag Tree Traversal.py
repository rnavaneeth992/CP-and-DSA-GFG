class Solution:
    #Function to store the zig zag order traversal of tree in a list.
    def zigZagTraversal(self, root):
        # Your code here
        r=[]
        q=[]
        if root==None:
            return 0
        q.append(root)
        while len(q)!=0:
            s=len(q)
            a=[]
            for i in range(0,s,1):
                temp=q[0]
                q.pop(0)
                if temp.left!=None:
                    q.append(temp.left)
                if temp.right!=None:
                    q.append(temp.right)
                a.append(temp.data)
            r.append(a)
        for i in range(1,len(r),2):
            r[i].reverse()
        result=[]
        for i in range(0,len(r),1):
            for j in range(0,len(r[i]),1):
                result.append(r[i][j])
        return result
