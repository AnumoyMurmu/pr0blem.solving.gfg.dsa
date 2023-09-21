// Given a string S of lowercase alphabets,
//  check if it is isogram or not.
//   An Isogram is a string in which no letter occurs more than once.

// Example 1:

// Input:
// S = machine
// Output: 1
// Explanation: machine is an isogram
// as no letter has appeared twice. Hence
// we print 1.

// Example 2:

// Input:
// S = geeks
// Output: 0
// Explanation: geeks is not an isogram
// as 'e' appears twice. Hence we print 0.

// Your Task:
// This is a function problem. 
// You only need to complete the function isIsogram()
//  that takes a string as a parameter and returns either true or false.

class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        
        unordered_map<char,int>map;
        
        for(int i=0; i<s.size(); i++)
        {
            map[s[i]]++;
    
        }
        
        for(auto itr=map.begin(); itr!=map.end(); itr++){
            if(itr->second >= 2) return false;
        }
        
        return true;
        
    }
};