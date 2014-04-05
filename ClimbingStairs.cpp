#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int climbStairs(int n)
	{
		vector<int> dp(n + 1,0);
		dp[0] = dp[1] = 1;
		int i;
		for(i = 2; i <= n; i++)
		{
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		return dp[n];
	}
};

int main()
{
	Solution solution;
	cout<<solution.climbStairs(3)<<endl;
	return 0;
}

