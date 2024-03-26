# Longest Common Prefix in an Array
# EasyAccuracy: 29.52%Submissions: 237K+Points: 2
# Given an array of N strings, find the longest common prefix among all strings present in the array.


# Example 1:

# Input:
# N = 4
# arr[] = {geeksforgeeks, geeks, geek,
#          geezer}
# Output: gee
# Explanation: "gee" is the longest common
# prefix in all the given strings.
# Example 2:

# Input: 
# N = 2
# arr[] = {hello, world}
# Output: -1
# Explanation: There's no common prefix
# in the given strings.

# Your Task:
# You don't need to read input or print anything. Your task is to complete the function longestCommonPrefix() which takes the string array arr[] and its size N as inputs and returns the longest common prefix common in all the strings in the array. If there's no prefix common in all the strings, return "-1".


# Expected Time Complexity: O(N*min(|arri|)).
# Expected Auxiliary Space: O(min(|arri|)) for result.

# soln:


#User function Template for python3

class Solution:
    def longestCommonPrefix(self, arr, n):
        # code here
        
        arr.sort()
        res=""
        
        for i in range(min(len(arr[0]), len(arr[n-1]))):
            if arr[0][i]==arr[n-1][i]:
                res+=arr[0][i]
            else:
                break
    
        return  res if res else "-1"

