#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Solution
{
public:
	bool isValidSudoku(vector<vector<char> > &board)
	{
		int rows[9],cols[9];

		int i,j;
		for(i = 0; i < 9; i++)
		{
			memset(rows,0,sizeof(int)*9);
			memset(cols,0,sizeof(int)*9);

			for(j = 0; j < 9; j++)
			{
				if(board[i][j] != '.')
				{
					if(rows[board[i][j] - '1'] > 0)
						return false;
					else
						rows[board[i][j] - '1']++;
				}

				if(board[j][i] != '.')
				{
					if(cols[board[j][i] - '1'] > 0)
						return false;
					else
						cols[board[j][i] - '1']++;
				}
			}	
		
		}

		for(i = 0; i < 9; i+=3)
		{
			for(j = 0; j < 9; j+=3)
			{
				int m,n;
				memset(rows,0,sizeof(int)*9);
				for(m = 0; m < 3; m++)
				{
					for(n = 0; n < 3; n++)
					{
						if(board[i+m][j+n] != '.')
						{
							if(rows[board[i+m][j+n] - '1'] > 0)
								return false;
							else
								rows[board[i+m][j+n] - '1']++;
						}
					}
				}
			
			}
		
		}
		return true;
	}
};

int main()
{
	Solution solution;
	vector< vector<char> > p = {
        { '5', '3', '.', '.', '7', '.', '.', '.', '.' },
        { '6', '.', '.', '1', '9', '5', '.', '.', '.' },
        { '.', '9', '8', '.', '.', '.', '.', '6', '.' },
        { '8', '.', '.', '.', '6', '.', '.', '.', '3' },
        { '4', '.', '.', '8', '.', '3', '.', '.', '1' },
        { '7', '.', '.', '.', '2', '.', '.', '.', '6' },
        { '.', '6', '.', '.', '.', '.', '2', '8', '.' },
        { '.', '.', '.', '4', '1', '9', '.', '.', '5' },
        { '.', '.', '.', '.', '8', '.', '.', '7', '9' },
    };
	cout<<solution.isValidSudoku(p) <<endl;
	return 0;
	
}

