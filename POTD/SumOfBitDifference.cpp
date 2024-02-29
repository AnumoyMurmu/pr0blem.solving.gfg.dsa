// Sum of bit differences
// MediumAccuracy: 60.03%Submissions: 33K+Points: 4
// Internship Alert!
// New month-> Fresh Chance to top the leaderboard and get SDE Internship! 

// banner
// Given an array integers arr[], containing n elements, find the sum of bit differences between all pairs of element in the array. Bit difference of a pair (x, y) is the count of different bits at the same positions in binary representations of x and y.
// For example, bit difference for 2 and 7 is 2. Binary representation of 2 is 010 and 7 is 111 respectively and the first and last bits differ between the two numbers.

// Note: (x, y) and (y, x) are considered two separate pairs.

// Example 1:

// Input: 
// n = 2
// arr[] = {1, 2}
// Output: 4
// Explanation: All possible pairs of an array are (1, 1), (1, 2), (2, 1), (2, 2).
// Sum of bit differences = 0 + 2 + 2 + 0
//                        = 4
// Example 2:

// Input:
// n = 3 
// arr[] = {1, 3, 5}
// Output: 8
// Explanation: 
// All possible pairs of an array are (1, 1), (1, 3), (1, 5), (3, 1), (3, 3) (3, 5),(5, 1), (5, 3), (5, 5).
// Sum of bit differences = 0 + 1 + 1 + 1 + 0 + 2 + 1 + 2 + 0 
//                        = 8
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function sumBitDifferences() which takes the array arr[] and n as inputs and return an integer that represents the sum of the bit differences between all possible pairs of elements in the array.

// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= n <= 10^5
// 1 <= arr[i] <= 10^5

// soln:

//User function template for C++
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    
	    long res=0;
	    
	    for(int i=0; i<32; i++){
	        long counton=0;
	        
	       for (int j = 0; j < n; ++j) {
         int val = arr[j];
            if ((val & (1 << i)) != 0) {
                  counton++;
            }
        }

	        
	        long countoff=n-counton;
	        long diff=counton*countoff*2;
	        res+=diff;
	    }
	    
	    return res;
	}
};
