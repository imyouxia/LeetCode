#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
	bool canJump(int A[],int n)
	{
		int start = 0,end = 0;
		while(start <= end && end < n - 1)
		{
			end = max(end,start + A[start]);
			start++;
		}	
		return end >= (n - 1);
	}
};

int main()
{
	Solution solution;

	{
		int p[] = {2,3,1,1,4};
		int n = sizeof(p) / sizeof(p[0]);
		cout << solution.canJump(p,n) <<endl;
	}

	{
		int p[] = {3,2,1,0,4};
		int n = sizeof(p) / sizeof(p[0]);
		cout << solution.canJump(p,n) <<endl;
	
	}
	return 0;
}


