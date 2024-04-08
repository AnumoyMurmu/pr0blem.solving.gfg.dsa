# Sum Of Digits
# SchoolAccuracy: 67.08%Submissions: 34K+Points: 0
# Given a number, N. Find the sum of all the digits of N
 

# Example 1:

# Input:
# N = 12
# Output:
# 3
# Explanation:
# Sum of 12's digits:
# 1 + 2 = 3
# Example 2:

# Input:
# N = 23
# Output
# 5
# Explanation:
# Sum of 23's digits:
# 2 + 3 = 5

# Your Task:
# You don't need to read input or print anything. Your task is to complete the function sumOfDigits() which takes an integer N as input parameters and returns an integer, total sum of digits of N.


# Expected Time Complexity: O(log10N)
# Expected Space Complexity: O(1)
 

# Constraints:
# 1<=N<=105

# soln:

#User function Template for python3

class Solution:
    def sumOfDigits (self, N):
        # code here
        sod=0
        while N>0:
            sod+=N%10
            N=N//10
        return sod
