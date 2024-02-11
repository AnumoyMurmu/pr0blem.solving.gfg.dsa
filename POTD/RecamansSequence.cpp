// Recamans sequence
// EasyAccuracy: 51.31%Submissions: 11K+Points: 2
// Internship Alert!
// Become an SDE Intern by topping this monthly leaderboard! 

// banner
// Given an integer n, return the first n elements of Recaman’s sequence.
// It is a function with domain and co-domain as whole numbers. It is recursively defined as below:
// Specifically, let a(n) denote the (n+1)th term. (0 being the 1st term).
// The rule says:
// a(0) = 0
// a(n) = a(n-1) - n, if a(n-1) - n > 0 and is not included in the sequence previously
//        =  a(n-1) + n otherwise.

// Example 1:

// Input: 
// n = 5
// Output: 
// 0 1 3 6 2
// Explaination: 
// a(0) = 0,
// a(1) = a(0)-1 = 0-1 = -1 and -1<0, therefore a(1) = a(0)+1 = 1,
// a(2) = a(1)-2 = 1-2 = -1 and -1<0, therefore a(2) = a(1)+2 = 3,
// a(3) = a(2)-3 = 3-3 = 0 but since 0 is already present in the sequence, a(3) = a(2)+3 = 3+3 = 6,
// a(4) = a(3)-4 = 6-4 = 2.
// Therefore the first 5 elements of Recaman's sequence will be 0 1 3 6 2.
// Example 2:

// Input: 
// n = 3
// Output: 
// 0 1 3
// Explaination: 
// As seen in example 1, the first three elements will be 0 1 3.
// Your Task:
// You do not need to read input or print anything. Your task is to complete the function recamanSequence() which takes n as the input parameter and returns the sequence.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)

// Constraints:
// 1 ≤ n ≤ 105


soln:
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
    
        // code here
        
        // vector<int>a;
        
        // for(int i=0; i<n; i++){
        //     if(i==0) a.push_back(0);
        //     else if(a.back() - i > 0 && find(a.begin(), a.end(),a.back() -i) == a.end()) a.push_back(a.back() - i);
        //     else a.push_back(a.back() + i);
        // }
        // return a
        
        
        vector<int>a;
        unordered_set<int> seen;
        
        a.push_back(0);
    seen.insert(0);
    a.push_back(1);
    seen.insert(1);
        
        for(int i=2; i<n;i++){
            int next=a.back()-i;
            
            if(next>0 && seen.find(next)==seen.end()){ 
                
                a.push_back(next);
                seen.insert(next);
            }
            else{
                
             next=a.back()+i;
             a.push_back(next);
             seen.insert(next);
             
            }
        }
        
        return a;
    }
};