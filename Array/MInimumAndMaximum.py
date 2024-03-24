# Find minimum and maximum element in an array
# BasicAccuracy: 68.55%Submissions: 249K+Points: 1
# Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

 

# Example 1:

# Input:
# N = 6
# A[] = {3, 2, 1, 56, 10000, 167}
# Output: 1 10000
# Explanation: minimum and maximum elements of array are 1 and 10000.
 

# Example 2:

# Input:
# N = 5
# A[]  = {1, 345, 234, 21, 56789}
# Output: 1 56789
# Explanation: minimum and maximum element of array are 1 and 56789.
 

# Your Task:  
# You don't need to read input or print anything. Your task is to complete the function getMinMax() which takes the array A[] and its size N as inputs and returns the minimum and maximum element of the array.

 

# Expected Time Complexity: O(N)
# Expected Auxiliary Space: O(1)

 

# Constraints:
# 1 <= N <= 105
# 1 <= Ai <=1012

# soln:

#User function Template for python3

def getMinMax( a, n):
    
    min_val, max_val=a[0], a[0];
    
    for i in range(0, n):
        if a[i]<min_val:
            min_val=a[i]
        elif a[i]>max_val:
            max_val=a[i]
        
    return min_val, max_val
    
    
    

