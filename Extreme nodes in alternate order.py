class Solution:
    # Your task is to complete this function
    def ExtremeNodes(self, root):
        # Code here
        r=[]
        q=[]
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
        result=[]
        for i in range(0,len(r),1):
            if i%2==0:
                result.append(r[i][len(r[i])-1])
            else:
                result.append(r[i][0])
        return result
