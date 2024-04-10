#User function Template for python3

class Solution:
    def reverse_digit(self, n):
        # Code here
        a=str(n)
        t=len(a)
        rev=0
        while n>0 and t>0:
            x=n%10
            n=n//10
            rev+=x*(10**(t-1))
            t=t-1
        return rev


