def insert1(arr,t):
        if len(arr)==0 or arr[0]>t:
            arr.insert(0,t)
        else:
            a=arr[0]
            arr.pop(0)
            insert1(arr,t)
            arr.insert(0,a)
def reverse(arr):
        if len(arr)!=0:
            t=arr[0]
            arr.pop(0)
            reverse(arr)
            insert1(arr,t)
class Solution:
    # your task is to complete this function
    # function sort the stack such that top element is max
    # funciton should return nothing
    # s is a stack
    def sorted(self, s):
        # Code here
        reverse(arr)
