// Replace all 0's with 5
// BasicAccuracy: 75.55%Submissions: 75K+Points: 1
// Internship Alert!
// Become an SDE Intern by topping this monthly leaderboard! 

// banner
// You are given an integer N. You need to convert all zeroes of N to 5.

// Example 1:

// Input:
// N = 1004
// Output: 1554
// Explanation: There are two zeroes in 1004
// on replacing all zeroes with "5", the new
// number will be "1554".
// Example 2:

// Input:
// N = 121
// Output: 121
// Explanation: Since there are no zeroes in
// "121", the number remains as "121".
// Your Task:
// Your task is to complete the function convertFive() which takes an integer N as an argument and replaces all zeros in the number N with 5. Your function should return the converted number.

// Expected Time Complexity: O(K) where K is the number of digits in N
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= n <= 10000


// soln:


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    
    int s=0;
    while(n != 0){
        int temp=n%10;
        if(temp==0) temp=5;
        s=s*10+temp;
        n=n/10;
    }
    
    int sq=0;
    while(s != 0){
        int temp=s%10;
        // if(temp==0) temp=5;
        sq=sq*10+temp;
        s=s/10;
    }
    
    return sq;
  
  
}
