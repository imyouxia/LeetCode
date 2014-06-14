#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void setZeroes(vector< vector<int> > &matrix)
    {
        int M = matrix.size();
        int N = matrix[0].size();
        vector<int> rows(M,1);
        vector<int> cols(N,1);
        int i,j;
        for(i = 0; i < M; i++)
        {
            for(j = 0; j < N; j++)
            {
                if(matrix[i][j] == 0)
                {
                    rows[i] = 0;
                    cols[j] = 0; 
                }
            }
        }

        for(i = 0; i < M; i++)
        {
            for(j = 0; j < N; j++)
            {
                if(rows[i] == 0 || cols[j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }

};

int main()
{
    return 0;
}

