// Count Odd Even
// BasicAccuracy: 37.44%Submissions: 95K+Points: 1
// 200+ people shotlisted last month for SDE Internship. Grab your spot this month via GfG Weekly Contest! 

// banner
// Given an array A[] of N elements. The task is to return the count of the number of odd and even elements in the array.

// Example:

// Input:
// N = 5
// A[] = 1 2 3 4 5
// Output:
// 3 2
// Explanation:
// There are 3 odd elements (1, 3, 5)
// and 2 even elements (2 and 4).

// Your Task:
// Your task is to complete the function countOddEven() which should return the count of odd and even elements of the array.

// Expected Time Complexity: O(N)
// Expected Space Complexity: O(1)

// Constraints:
// 1 <= N <= 106
// 1 <= Ai <= 106

//   soln:

//User function Template for C++

class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    vector<int> countOddEven(int arr[], int sizeof_array)
    {
        // your code here
          int cnt1=0,cnt2=0;
     
        for(int i=0;i<sizeof_array;i++)
        {
            if(arr[i]%2==0)
            {
                cnt1++;
                continue;
            }
            cnt2++;
        }
        return {cnt2,cnt1};
    }
};
