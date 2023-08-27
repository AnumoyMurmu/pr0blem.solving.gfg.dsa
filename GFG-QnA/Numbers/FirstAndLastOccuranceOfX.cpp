// Given a sorted array arr containing n elements with possibly duplicate  is to find indexes of first elements, the taskand last occurrences of an element x in the given array.
// Note: If the number x is not found in the array then return both the indices as -1.

// Example 1:

// Input:
// n=9, x=5
// arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
// Output:  
// 2 5
// Explanation: 
// First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5. 
// Example 2:

// Input:
// n=9, x=7
// arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
// Output:  
// 6 6
// Explanation: 
// First and last occurrence of 7 is at index 6.


int i = -1, j = -1; // Initialize two variables i and j to -1.
for (int k = 0; k < n; k++) {
    if (arr[k] == x && i < 0) i = k; // If arr[k] equals x and i is still -1, set i to k.
    if (arr[k] == x) j = k; // Set j to k if arr[k] equals x.
}
return {i, j}; // Return a pair of values {i, j}.

// Here's what this code does:

// int i = -1, j = -1;: It initializes two variables, i and j, to -1. These variables will be used to store the indices of the first and last occurrences of the value x in the array.

// for (int k = 0; k < n; k++): This is a loop that iterates through the array arr from index 0 to n-1.

// if (arr[k] == x && i < 0) i = k;: Inside the loop, this checks if the current element arr[k] is equal to x. If it is and i is still -1 (meaning it hasn't been assigned an index yet), it sets i to the current index k. This records the index of the first occurrence of x in the array.

// if (arr[k] == x) j = k;: This part always sets j to the current index k whenever arr[k] is equal to x. This records the index of the last occurrence of x in the array. It will overwrite the previous value of j if x appears more than once in the array.

// return {i, j};: After the loop finishes, this line returns a pair of values {i, j}. This pair represents the indices of the first and last occurrences of x in the array.

// So, this code finds the first and last occurrences of x in the array and returns them as a pair of indices. If x is not found in the array, both i and j remain -1, indicating that no occurrences were found.