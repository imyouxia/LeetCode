#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int uniquePathsWithObstacles(vector< vector<int> > &obstacleGrid)
	{
		int m = obstacleGrid.size();
		int n = obstacleGrid[0].size();
		int dp[m][n];
		if(obstacleGrid[0][0] == 1)
			return 0;
		dp[0][0] = 1;
		int i,j;
		
		for(i = 1; i < m; i++)
		{
			dp[i][0] = obstacleGrid[i][0] == 1 ? 0 : dp[i - 1][0];
		}	

		for(j = 1; j < n; j++)
		{
			dp[0][j] = obstacleGrid[0][j] == 1 ? 0 : dp[0][j - 1];
		}

		for(i = 1; i < m; i++)
		{
			for(j = 1; j < n; j++)
			{
				dp[i][j] = obstacleGrid[i][j] == 1 ? 0 :dp[i - 1][j] + dp[i][j - 1];
			}
		}
		return dp[m - 1][n - 1];
	}

};

int main()
{
	Solution solution;
	vector< vector<int> > p;
	p = {
		{0,0,0},
		{0,1,0},
		{0,0,0}
	};
	cout << solution.uniquePathsWithObstacles(p) <<endl;
	return 0;
}

