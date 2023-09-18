/*
Given two strings A and B consisting of lowercase english characters.
 Find the characters that are not common in the two strings. 
*/

// Note :- Return the string in sorted order.

// Example 1:

// Input:
// A = geeksforgeeks
// B = geeksquiz
// Output: fioqruz
// Explanation: 
// The characters 'f', 'i', 'o', 'q', 'r', 'u','z' 
// are either present in A or B, but not in both.

// Example 2:

// Input:
// A = characters
// B = alphabets
// Output: bclpr
// Explanation: The characters 'b','c','l','p','r' 
// are either present in A or B, but not in both.


/* Your Task:  
 You dont need to read input or print anything. 
Complete the function UncommonChars() 
which takes strings A and B as input parameters
 and returns a string that contains all the uncommon characters in sorted order.
  If no such character exists return "-1".
*/


class Solution{

public:
        string UncommonChars(string A, string B)
        {
            // code here
            
            string result = "";
            
            unordered_set<char>set1;
            unordered_set<char>set2;
            set<char>set3;
            
            for(char ch:A)
            {
                set1.insert(ch);
            }
            
            for(char ch:B)
            {
                if(set1.count(ch)==0)
                {
                    set3.insert(ch);
                }
            }
            
            for(char ch:B){
                set2.insert(ch);
            }
            
            for(char ch:A)
            {
                if(set2.count(ch)==0)
                {
                    set3.insert(ch);
                }
            }
            
            for(char str:set3)
            {
                result+=str;
            }
            
            if(result.size()==0)
            {
                return "-1";
            }
            else{
                return result;
            }
        }
};