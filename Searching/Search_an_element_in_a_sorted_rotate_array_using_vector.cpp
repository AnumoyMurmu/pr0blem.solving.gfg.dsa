Search an element in sorted and rotated array
EasyAccuracy: 41.3%Submissions: 44K+Points: 2
Three 90 Challenge Extended On Popular Demand! Don't Miss Out Now 

banner
Given a sorted and rotated array A of N distinct elements which are rotated at some point, and given an element K. The task is to find the index of the given element K in array A.

Example 1:

Input:
N = 9
A[] = {5,6,7,8,9,10,1,2,3}
K = 10
Output: 5
Explanation: 10 is found at index 5.
Example 1:

Input:
N = 3
A[] = {3,1,2}
K = 1
Output: 1
User Task:
Complete Search() function and return the index of the element K if found in the array. If the element is not present, then return -1.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 107
0 ≤ Ai ≤ 108
1 ≤ K ≤ 108


soln:



//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> vec, int K) {
    //code here
    
    int l = 0;
        int h = vec.size() - 1;

        while (l <= h) {
            int mid = (l + h) / 2;

            if (vec[mid] == K) {
                return mid;
            }

            // left sorted
            if (vec[l] <= vec[mid]) {
                if (vec[l] <= K && K <= vec[mid]) {
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            // right sorted
            else {
                if (vec[mid] <= K && K <= vec[h]) {
                    l = mid + 1;
                } else {
                    h = mid - 1;
                }
            }
        }

        return -1;
    
}