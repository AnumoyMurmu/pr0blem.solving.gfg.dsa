

//soln:
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            map<int,int> mpa;map<int,int>mpb;vector<int> result; set<int> mpc;
            for(int i=0;i<n1;i++)
            {
              mpa[A[i]]++;  
            }
            
            for(int i=0;i<n2;i++)
            {
                mpb[B[i]]++;
            }
            
            for(int k=0;k<n3;k++)
            {
                if((mpa.find(C[k]) != mpa.end()) && (mpb.find(C[k]) !=mpb.end()))
                {
                    if(mpc.find(C[k]) == mpc.end())
                    {
                     result.push_back(C[k]); 
                     mpc.insert(C[k]);
                    }
                }
            }
            
            for(int i=0;i<result.size();i++)
            {
                if(result[result.size()-1] == result[result.size()-2])
                {
                    result.pop_back();
                }
                
            }
            
            
            
            return result;
           
            
}
};