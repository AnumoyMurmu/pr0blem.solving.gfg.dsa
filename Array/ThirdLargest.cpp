Third largest element
BasicAccuracy: 45.04%Submissions: 96K+Points: 1
Internship Alert!
Become an SDE Intern by topping this monthly leaderboard! 

banner
Given an array of distinct elements. Find the third largest element in it.

Suppose you have A[] = {1, 2, 3, 4, 5, 6, 7}, its output will be 5 because it is the 3 largest element in the array A.

Example 1:

Input:
N = 5
A[] = {2,4,1,3,5}
Output: 3
Example 2:

Input:
N = 2
A[] = {10,2}
Output: -1
Your Task:
Complete the function thirdLargest() which takes the array a[] and the size of the array, n, as input parameters and returns the third largest element in the array. It return -1 if there are less than 3 elements in the given array.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ A[i] ≤ 105

//soln:

class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         
        int largest=a[0];
	    int SL=-1;
	    int TL=-1;
	    
	    for(int i=0; i<n; i++){
	        if(a[i]>largest){
	            largest=a[i];
	        }
	    }
	    
	    
	    for(int i=0;i<n;i++){
	        if(a[i]>SL && a[i]<largest){
	            SL=a[i];
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        if(a[i]>TL && a[i]<SL){
	            TL=a[i];
	        }
	    }
	    
	    if(largest==TL) return -1;
	    return TL;
	    
    }

};