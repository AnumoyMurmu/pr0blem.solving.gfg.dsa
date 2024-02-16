// Find the smallest and second smallest element in an array
// BasicAccuracy: 24.44%Submissions: 81K+Points: 1
// Internship Alert!
// Become an SDE Intern by topping this monthly leaderboard! 

// banner
// Given an array of integers, your task is to find the smallest and second smallest element in the array. If smallest and second smallest do not exist, print -1.

// Example 1:

// Input :
// 5
// 2 4 3 5 6
// Output :
// 2 3 
// Explanation: 
// 2 and 3 are respectively the smallest 
// and second smallest elements in the array.

// Example 2:

// Input :
// 6
// 1 2 1 3 6 7
// Output :
// 1 2 
// Explanation: 
// 1 and 2 are respectively the smallest 
// and second smallest elements in the array.
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function minAnd2ndMin() which takes the array A[] and its size N as inputs and returns a vector containing the smallest and second smallest element if possible, else return {-1,-1}.

 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

 

// Constraints:
// 1<=N<=105
// 1<=A[i]<=105

// soln:



vector<int> minAnd2ndMin(int a[], int n) {
    
    
    vector<int>result;
    
    int s=INT_MAX, ss=INT_MAX;
    
    for(int i=0; i<n; i++){
        if(s>a[i]) s=a[i];
    }
    for(int i=0; i<n; i++){
        if(ss>a[i] && a[i]!=s) ss=a[i];
    }
    
    if(ss==INT_MAX){ 
        result.push_back(-1);
    }
    
    else{
        result.push_back(s);
        result.push_back(ss);
    } 
    
    return result;
}