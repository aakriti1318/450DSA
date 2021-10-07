class Solution:
    def factorial(self, N):
        res = 1
        if N==0: 
            return str(1)
        else:
            for i in range(1,N+1):
                res = res*i
        return str(res)