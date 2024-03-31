# The OR Gate
# BasicAccuracy: 58.46%Submissions: 6K+Points: 1
# Given N bits to an OR - Gate find the output that will be produced. 
# OR - Gate Table:
# 1 | 1 = 1
# 1 | 0 = 1
# 0 | 1 = 1
# 0 | 0 = 0
 

# Example 1:

# Input:
# N = 4
# arr: 1 1 1 0
# Output:
# 1
# Explanation:
# 1 | 1 = 1
# 1 | 1 = 1
# 1 | 0 = 1
# hence output is 1
# Example 2:

# Input:
# N = 4
# arr: 0 0 1 0
# Output:
# 1
# Explanation:
# 0 | 0 = 0
# 0 | 1 = 1
# 1 | 0 = 1
# hence output is 1

# Your Task:
# You don't need to read input or print anything. Your task is to complete the function orGate() which takes the array arr[], its size N as input parameters and returns the output after processing OR operations on N bits.
 

# Expected Time Complexity: O(N)
# Expected Space Complexity: O(1)
 

# Constraints:
# 1<=N<=1000

# soln:

#User function Template for python3
class Solution:
    def orGate (self, arr, N):
        # code here 
       count = 0
       for i in range(N):
           count = count | arr[i]
       return count

