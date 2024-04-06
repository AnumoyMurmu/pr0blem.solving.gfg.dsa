
class Solution:
    def seriesSum(self, n : int) -> int:
        # code here
           # # code here
        # k=0
        # for i in range(n):
        #     k+=i+1
        # # return k
        # k = sum(x + 1 for x in range(n))
        # return(k)
        k = (n * (n + 1)) // 2
        return(k)

