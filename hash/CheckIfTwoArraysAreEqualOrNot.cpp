// Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
// Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

// Example 1:

// Input:
// N = 5
// A[] = {1,2,5,4,0}
// B[] = {2,4,5,0,1}
// Output: 1
// Explanation: Both the array can be 
// rearranged to {0,1,2,4,5}
// Example 2:

// Input:
// N = 3
// A[] = {1,2,5}
// B[] = {2,4,15}
// Output: 0
// Explanation: A[] and B[] have only 
// one common value.


class Solution {
public:
    // Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        // Check if the sizes of vectors A and B are not equal.
        if (A.size() != B.size()) {
            return false; // Return false if sizes are different.
        }
        
        // Create two unordered maps to store element counts for arrays A and B.
        unordered_map<long long int, int> m1; // For array A.
        unordered_map<long long int, int> m2; // For array B.
        
        // Loop through both arrays to populate the element counts in the maps.
        for (int i = 0; i < N; i++) {
            m1[A[i]]++; // Increment the count of element A[i] in map m1.
            m2[B[i]]++; // Increment the count of element B[i] in map m2.
        }
        
        // Check if the sizes of the maps m1 and m2 are different.
        if (m1.size() != m2.size()) {
            return false; // Return false if sizes are different.
        }
        
        // Iterate through the keys (elements) in map m1.
        for (auto it = m1.begin(); it != m1.end(); ++it) {
            long long key = it->first; // Get the current element.
            int count1 = it->second;   // Get the count of the element in map m1.
            int count2 = m2[key];      // Get the count of the same element in map m2.
            
            // Compare the counts of the element in both maps.
            if (count1 != count2) {
                return false; // Return false if counts are different.
            }
        }
        
        // If all checks pass, return true, indicating that the arrays are equal.
        return true;
    }
};





// explain:

// It first checks if the sizes of vectors A and B are not equal using if (A.size() != B.size()). If they have different sizes, it immediately returns false because arrays with different sizes cannot be equal.

// Two unordered maps, m1 and m2, are created to store the counts of elements in vectors A and B, respectively. The keys of these maps are the elements from the arrays, and the values are the counts of how many times each element appears.

// The code then loops through both arrays (A and B) and increments the counts of elements in the corresponding maps (m1 and m2).

// After populating both maps, it checks if the sizes of the maps (m1.size() and m2.size()) are different. If they are, it means that the arrays contain different elements, so it returns false.

// Next, it iterates through the keys (elements) in map m1 using an iterator it. For each element, it compares the counts of that element in both maps (count1 in m1 and count2 in m2). If any counts differ, it returns false.

// If all checks pass (sizes match, and counts for each element match), it returns true, indicating that the two arrays are equal in terms of the set of elements and their counts.

// In summary, this code compares two arrays for equality, considering both the elements they contain and how many times each element appears. If they have the same elements with the same counts, the function returns true; otherwise, it returns false.
