// Given a single integer N, your task is to find the sum of the square of the first N even natural Numbers.
 

// Example 1:

// Input: 2
// Output: 20
// Explanation: 2^2 + 4^2 = 20
// Example 2: 

// Input: 3
// Outptut: 56
// Explanation: 2^2 + 4^2 + 6^2 = 56


	public:
		long long int sum_of_square_evenNumbers(long long int n)
		{
		    // Code here
		    
		    long long int sum=0;
		    for(int i=1; i<=n; i++)
		    {
		        int evenNum=2*i;
		        long long int square = evenNum*evenNum;
		        sum=sum+square;
		    }
		    return sum;
		}
};