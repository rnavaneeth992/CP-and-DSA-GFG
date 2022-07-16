class Solution:
    def gcd(a,b):
        if a==0:
            return b
        gcd(b%a,a)
    def maxBinTreeGCD(self, arr, N):
        # code here 
        arr.sort()
        max=0
        for i in range(0,len(arr)-1,1):
            if arr[i][0]==arr[i+1][0]:
                m=gcd(arr[i][1],arr[i+1][1])
                if max<m:
                    max=m
        return max
