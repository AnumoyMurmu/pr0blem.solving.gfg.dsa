
# Remove Consecutive Characters
# BasicAccuracy: 53.35%Submissions: 81K+Points: 1
# Matrix Partners India: Exclusive Job-A-Thon | Apply to 15+ Companies via 1 Hiring Challenge | Starting from 29th April onwards

# banner
# Given a string S. For each index i(1<=i<=N-1), erase it if s[i] is equal to s[i-1] in the string.

# Example 1:

# Input:
# S = aabb
# Output:  ab 
# Explanation: 'a' at 2nd position is
# appearing 2nd time consecutively.
# Similiar explanation for b at
# 4th position.

# Example 2:

# Input:
# S = aabaa
# Output:  aba
# Explanation: 'a' at 2nd position is
# appearing 2nd time consecutively.
# 'a' at fifth position is appearing
# 2nd time consecutively.
 

# Your Task:
# You dont need to read input or print anything. Complete the function removeConsecutiveCharacter() which accepts a string as input parameter and returns modified string.
 

# Expected Time Complexity: O(|S|).
# Expected Auxiliary Space: O(|S|).
 

# Constraints:
# 1<=|S|<=105
# All characters are lowercase alphabets.




#User function Template for python3

class Solution:
    def removeConsecutiveCharacter(self, S):
        # code here
        
        result=[]
        result.append(S[0])
        
        for i in range(1,len(S)):
            if result[-1]!=S[i]:
                # p.append(S[i+1])
                result.append(S[i])
        
        # i=i+1
        return "".join(result)
