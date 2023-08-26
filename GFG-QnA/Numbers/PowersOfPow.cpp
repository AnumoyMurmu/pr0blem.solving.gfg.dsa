// Given a single integer N, your task is to find the sum of the square of the first N odd natural Numbers.
 

// Example 1:
// Input: 2
// Output: 10
// Explanation: 1^2 + 3^2 = 10
// Example 2: 
// Input: 3
// Output: 35
// Explanation: 1^2 + 3^2 + 5^2 = 35

class Solution
{
	public:
		long long int sum_of_square_oddNumbers(long long int n)
		{
		    // Code here.
		    long long int sum=0;
		    for(long long int i=1; i<=n; i++){
		        int oddNum=2*i-1;
		        long long int square = oddNum*oddNum;
		        sum=sum+square;
		    }
		    return sum;
		}
};