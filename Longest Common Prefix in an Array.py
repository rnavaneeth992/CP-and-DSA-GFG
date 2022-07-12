def longestCommonPrefix(self, arr, n):
        # code here
        min=10000000
        for i in range(0,len(arr),1):
            if min>len(arr[i]):
                min=len(arr[i])
        result=""
        for i in range(0,min,1):
            count=0
            for j in range(0,len(arr),1):
                if arr[j][i]==arr[0][i]:
                    count+=1
            if count==len(arr):
                result=result+arr[0][i]
            else:
                break
        if len(result)==0:
            return "-1"
        else:
            return result
