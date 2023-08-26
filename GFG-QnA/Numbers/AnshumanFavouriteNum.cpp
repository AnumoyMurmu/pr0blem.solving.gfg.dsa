// You are given an integer input N and you have to find whether it is the sum or the difference of the integer 5. (5+5, 5+5+5, 5-5,5-5-5+5+5…..)

 

// Example 1:

// Input:
// N = 10
// Output:
// YES
// Explanation:
// Because 10 can be 
// written as a sum of 5+5.

// Example 2:

// Input:
// N = 9
// Output:
// NO
// Explanation:
// 9 can not be written
// in the above form.

class Solution{   
public:
    string isValid(long long N){
        // code here 
        if(N%5==0 || N==0)
        {
            return "YES";
        }
        else{
            return "NO";
        }
    }
};