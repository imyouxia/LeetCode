#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    bool searchMatrix(vector< vector<int> > &matrix, int target) 
    {
        int M = matrix.size();
        int N = matrix[0].size();
        int i = 0;
        int j = N - 1;
        while(i < M && j >= 0)
        {
            if(matrix[i][j] == target)
                return true;
            if(matrix[i][j] < target)
                i++;
            else
                j--;
        }        
                   
       return false; 
    }
};

int main()
{
    Solution sol;
    vector< vector<int> > p = 
    {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,50}
    };
    cout << sol.searchMatrix(p,3) <<endl;
    return 0;
}

