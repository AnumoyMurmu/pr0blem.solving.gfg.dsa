// Given a string S, 
// Check if characters of the given string can be rearranged to form a palindrome.
// Note: You have to return 1 
// if it is possible to convert the given string into palindrome else return 0. 

// Example 1:

// Input:
// S = "geeksogeeks"
// Output: Yes
// Explanation: The string can be converted
// into a palindrome: geeksoskeeg

// Example 2:

// Input: 
// S = "geeksforgeeks"
// Output: No
// Explanation: The given string can't be
// converted into a palindrome.

// Your Task:
// You don't need to read input or print anything. 
// Your task is to complete the function isPossible() 
// which takes the string S as input and returns 1 
// if the string can be converted into a palindrome. Else, it returns 0.


int isPossible (string S)
{
    // your code here
    unordered_map<char,int>map;
    
    for(int i=0; i<S.size(); i++)
    {
        map[S[i]]++;
    }
    
    int Oddcount=0;
    for(auto e:map)
    {
        if(e.second%2 != 0)
        Oddcount++;
    }
    
    for(int i=0; i<S.size(); i++)
    {
        if(S.size()%2!=0 && Oddcount==1 || S.size()%2==0 && Oddcount==0)
        {
            return 1;
        }
    }
    
    return 0;
}