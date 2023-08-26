// Your task is to calculate sum  of primes present as digits of given number N.

// Example 1:

// Input: 333
// Output: 9
// Explaination: 3 is a prime number. It 
// is present 3 times. So 3+3+3 = 9.
// Example 2:

// Input: 686
// Output: 0
// Explaination: Neither 6 nor 8 is a 
// prime number.

class Solution{
   
public:
    int primeSum(int N){
        // code here
        int sum=0;
        
       while(N)
       {
         int j=N%10;

           if(j==2||j==3||j==5||j==7) sum=sum+j;
           
            N=N/10;
       }
       return sum;
    }
};