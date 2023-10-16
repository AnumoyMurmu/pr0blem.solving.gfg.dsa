class Solution{
public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here   
        vector<int>ans;
        sort(a, a+n);
        
        for(int i=0; i<n; i++)
        {
            ans.push_back(a[i]);
            if(i>=n-3) return ans;
        }
        
        // return ans;
    }
};