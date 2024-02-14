// Find the Number which contain the digit d
// BasicAccuracy: 29.74%Submissions: 12K+Points: 1
// Internship Alert!
// Become an SDE Intern by topping this monthly leaderboard! 

// banner
// Given two integer number n and d. The task is to find the number between 0 to n which contain the specific digit d.

// Example 1 - 

// Input
// n = 20
// d = 5
// Output
// 5 15
// Explanation:
// For number till 20, 5 appears in 5 itself and 15.
// Example 2 -

// Input
// n = 50
// d = 2
// Output
// 2 12 20 21 22 23 24 25 26 27 28 29 32 42
// Explanation:
// For number till 50, 2 appears in all these numbers.
// Constraints:
// 0 <= n <= 103
// 0 <= d <= 9

// soln:



vector<int> solve(int n, int d)
{
    //code here
    
      vector<int> ans;
    for(int i=0;i<=n;++i){
        int a = i;
        if(a == 0 && d == 0) ans.push_back(a);
        while(a){
            if(a%10 == d){
                ans.push_back(i);
                break;
            }
            a /= 10;
        }
    }
    if(ans.size() == 0) return {-1};
    
    return ans;
    
}