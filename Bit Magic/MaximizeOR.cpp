// Maximize OR
// BasicAccuracy: 25.59%Submissions: 1K+Points: 1
// Internship Alert!
// Become an SDE Intern by topping this monthly leaderboard! 

// banner
// Given a number X find the total numbers A such that A OR X > X,  and 1<=A<=X.

// Example 1:

// Input: X = 10
// Output: 7 
// Explanation: In the range [1,10] if the 
// OR is taken of 10 and any number in the 
// set {1,3,4,5,6,7,9} the resulting value 
// will be greater than 10.
// Example 2:

// Input: X = 5
// Output: 2
// Explanation: In the range [1,5] if the
// OR is taken of 5 and any number in the
// set {2,3} the resulting value
// will be greater than 5.

// Your Task:  
// You dont need to read input or print anything. Complete the function getCount() which takes X as input parameter and returns the the total count of the different value of A possible.

// Expected Time Complexity: O(logn)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1<= X <=10^8


// soln:
//User function Template for C++
class Solution {
  public:
    int getCount(int X) {
        // code here
         int count=0, X1=X;
       while(X)
        {
            if(X&1) count++;
            X=X>>1;
        }        
        return (X1-pow(2,count)+1); //2^n-1 combinations of setbits
    }
};