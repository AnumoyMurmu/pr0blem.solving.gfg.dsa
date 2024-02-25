
class Solution {
  public:
    bool isMagicArray(int n, vector<int> &arr) {
        // code here
        n=arr.size();
        for(int i=0; i<n-1; ++i){
            if(arr[i]%2==arr[i+1]%2){
                return 0;
            }
        }
        
        return 1;
    }
};
