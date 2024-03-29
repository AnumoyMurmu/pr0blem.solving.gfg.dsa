#User function Template for python3

class Solution:
    def isPrime (self, N):
        # code here
         
        import math
        if(N==1):
            return 0
        if(N==2 or N==3):
            return 1 
        if(N%2==0 or N%3==0):
            return 0
        for i in range(2,int(math.sqrt(N))+1):
            if(N%i==0):
                return 0
        return 1
           
            
 
