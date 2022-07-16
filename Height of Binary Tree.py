class Solution:
    #Function to find the height of a binary tree.
    def height(self, root):
        # code here
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
        return len(r)
