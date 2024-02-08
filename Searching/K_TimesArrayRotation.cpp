Rotation
EasyAccuracy: 23.16%Submissions: 151K+Points: 2
Three 90 Challenge Extended On Popular Demand! Don't Miss Out Now 

banner
Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. Find the value of K.

Example 1:

Input:
N = 5
Arr[] = {5, 1, 2, 3, 4}
Output: 1
Explanation: The given array is 5 1 2 3 4. 
The original sorted array is 1 2 3 4 5. 
We can see that the array was rotated 
1 times to the right.
Example 2:

Input:
N = 5
Arr[] = {1, 2, 3, 4, 5}
Output: 0
Explanation: The given array is not rotated.
Your Task:
Complete the function findKRotation() which takes array arr and size n, as input parameters and returns an integer representing the answer. You don't have to print answers or take inputs.

Expected Time Complexity: O(log(N))
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <=105
1 <= Arri <= 107

soln:
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    
	     int left=0,right=n-1;
        if(arr[left]<arr[right]) return 0;
        while(left<right && arr[right]> arr[right-1])
        {
            right--;
        }
       
        return right;
	}

};