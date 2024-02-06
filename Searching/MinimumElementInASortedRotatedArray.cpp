Minimum element in a sorted and rotated array
EasyAccuracy: 40.57%Submissions: 97K+Points: 2
Three 90 Challenge Extended On Popular Demand! Don't Miss Out Now 

banner
A sorted(in ascending order) array A[ ] with distinct elements is rotated at some unknown point, the task is to find the minimum element in it.

Example 1

Input:
N = 5
arr[] = {4 ,5 ,1 ,2 ,3}
Output: 1
Explanation: 1 is the minimum element in the array.
Example 2

Input:
N = 7
arr[] = {10, 20, 30, 40, 50, 5, 7}
Output: 5
Explanation: Here 5 is the minimum element.
 

Your Task:
Complete the function findMin() which takes an array arr[] and n, size of the array as input parameters, and returns the minimum element of the array.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(log N).

Constraints:
1 ≤ N ≤ 100000
1 ≤ A[i] ≤ 1000000

soln:
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        
        int low=0, high=n-1;
        int ans=INT_MAX;
        
        while(low<=high){
            
            int mid=(low+high)/2;
            
            if(arr[low]<=arr[mid]){
                ans=min(ans,arr[low]);
                low=mid+1;
            }
            
            else{
                high=mid-1;
                ans=min(ans,arr[mid]);
                
            }
        }
        
        return ans;
    }
};

