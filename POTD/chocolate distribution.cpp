/* 
Chocolate DistributionAccuracy: 100.0%Submissions: 1+ Points: 10Given N number of children with the craving factor of each child is denoted by arr[i], where arr is array of size N. Also we have an array brr of size M which denotes M chocolates each of size brr[i]. ith child is satisfied if gets the jth chocolate such that arr[i] <= brr[j]. Note that you cannot feed the same chocolate to more than one children and one child cannot feed on more than one chocolate.Find the maximum number of children which can be satisfied if we distributed the chocolates optimally to children.Example 1:Input:N3, arr = {1,2,3}M2, brr = {1,1}Output:1Explanation:Only Oth child can satisfy his craving.Other children have craving factor greaterthan remaining 1 chocolate, so we can't feed anyone.Example 2:Input:N = 3, arr = {1,2,3}M 2. brr = {1.2}Output:2Explanation:We can feed chocolate at index O to child at index 0 and chocolate at index 1 to child at index 1.We cannot feed anything to child at index 2 as we have no chocolates left

*/


#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int chocolateDistribution(int N, int M, vector<int>& arr, vector<int>& brr) {
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        
        int i = 0, j = 0;
        int satisfiedChildren = 0;
        
        while (i < N && j < M) {
            if (arr[i] <= brr[j]) {
                satisfiedChildren++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        
        return satisfiedChildren;
    }
};