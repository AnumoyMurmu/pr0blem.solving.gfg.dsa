// Given a string str of lowercase alphabets. 
  // The task is to find the maximum occurring character in the string str. 
// If more than one character occurs the maximum number of time then print the lexicographically smaller character.




class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        
        map<char, int>mpp;
        
        for(int i=0; i<str.length(); i++){
            mpp[str[i]]++;
        }
        
        int mx=0, ans;
        
        for(auto it:mpp){
            if(it.second>mx){
                ans=it.first;
                mx=it.second;
            }
        }
        return ans;
        
    }

};
