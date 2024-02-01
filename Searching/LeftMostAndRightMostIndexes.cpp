Left most and right most index
EasyAccuracy: 38.23%Submissions: 68K+Points: 2
Three 90 Challenge Extended On Popular Demand! Don't Miss Out Now 

banner
Given a sorted array with possibly duplicate elements. The task is to find indexes of first and last occurrences of an element X in the given array.

Note: If the element is not present in the array return {-1,-1} as pair.

 

Example 1:

Input:
N = 9
v[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}
X = 5
Output:
2 5
Explanation:
Index of first occurrence of 5 is 2
and index of last occurrence of 5 is 5.
Example 2:

Input:
N = 9
v[] = {1, 3, 5, 5, 5, 5, 7, 123, 125}
X = 7
Output:
6 6
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function indexes() which takes the array v[] and an integer X as inputs and returns  the first and last occurrence of the element X. If the element is not present in the array return {-1,-1} as pair.

Can you solve the problem in expected time complexity?


Expected Time Complexity: O(Log(N))
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 105
1 ≤ v[i], X ≤ 1018


soln:

class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        
        long low = 0, high = v.size() - 1, f = -1, l = -1;

    // First Binary Search for First Occurrence (f)
    while (high >= low) {
        long mid = (low + high) / 2;
        if (v[mid] > x) {
            high = mid - 1;
        } else if (v[mid] < x) {
            low = mid + 1;
        } else {
            if (mid == 0 || v[mid] != v[mid - 1]) {
                f = mid;
                break;
            } else {
                high = mid - 1;
            }
        }
    }

    // Reset low and high for the second binary search
    low = 0;
    high = v.size() - 1;

    // Second Binary Search for Last Occurrence (l)
    while (high >= low) {
        long mid = (low + high) / 2;
        if (v[mid] > x) {
            high = mid - 1;
        } else if (v[mid] < x) {
            low = mid + 1;
        } else {
            if (mid == v.size() - 1 || v[mid] != v[mid + 1]) {
                l = mid;
                break;
            } else {
                low = mid + 1;
            }
        }
    }

    pair<long, long> p;
    p.first = f;
    p.second = l;
    return p;
        
    }
};