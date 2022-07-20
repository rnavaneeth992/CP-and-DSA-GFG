def getMax(root):
        if root==None:
            return [0,0]
        l=getMax(root.left)
        r=getMax(root.right)
        return [l[1]+r[1]+root.data,max(l[0],l[1])+max(r[0],r[1])]
class Solution:
    #Function to return the maximum sum of non-adjacent nodes.
    def getMaxSum(self,root):
        #code here
        a=getMax(root)
        return max(a[0],a[1])
