// Given a number N. Find if it can be expressed as sum of two prime numbers.

// Example 1:

// Input: N = 34
// Output: "Yes" 
// Explanation: 34 can be expressed as 
// sum of two prime numbers.
// Example 2:

// Input: N = 23
// Output: "No"
// Explanation: 23 cannnot be expressed as
// sum of two prime numbers. 



class Solution {
public:

bool isPrime (int N)
 {
      for(int i=2;i*i<=N;i++) if(N%i==0) return false;
        return true;
 }
 
    string isSumOfTwo(int N){
        // code here
        
   int ans=1;
       for(int i=2;i+i<=N;i++)
       {
           if(!isPrime(i)) continue;
           if(isPrime(N-i))return "Yes";
       }
       return "No";
    }
};