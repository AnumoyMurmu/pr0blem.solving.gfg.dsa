Search in Rotated Array 2
MediumAccuracy: 46.6%Submissions: 18K+Points: 4
Three 90 Challenge Extended On Popular Demand! Don't Miss Out Now 

banner
Given a sorted and rotated array A of N elements which is rotated at some point, and may contain duplicates and given an element key. Check whether the key exist in the array A or not.

Example 1:

Input:
N = 7
A[] = {2,5,6,0,0,1,2}
key = 0
Output:
1
Explanation:
0 is found at index 3.
Example 2:

Input:
N = 7
A[] = {2,5,6,0,0,1,2}
key = 3
Output:
0
Explanation:
There is no element that has value 3.
Your Task:
Complete the function search() which takes a integer N and  an array A and the Key as input parameters, and returns the answer.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 5000
0 ≤ A[i] ≤ 108
1 ≤ key ≤ 108


soln:
class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        // Code here
        
        int low=0, high=N-1;
        while(low<=high){
            int mid=(low+high)/2;
            
            if(A[mid]==Key) return 1;
            if(A[low]==A[mid] && A[mid]==A[high]){
                low=low+1;
                high=high-1;
                continue;
            }
            
            //left sorted
        if(A[low]<=A[mid]){
            if(A[low]<=Key && Key<=A[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        
          //right sorted
        else{
            
            if(A[mid]<=Key && Key<=A[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        
        }
        
        return 0;
        
    }
};