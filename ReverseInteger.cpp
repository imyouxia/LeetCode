#include <iostream>
#include <climits>
#include <cassert>

using namespace std;

class Solution
{
public:
	int reverse(int x)
	{
		long long y = 0;
		while(x != 0)
		{
			y = y * 10 + x % 10;
			x = x / 10;
		}
		assert(y >= INT_MIN && y <= INT_MAX);
		return y;	
	}		
};

int main()
{
	Solution solution;
	cout<<solution.reverse(123)<<endl;
	cout<<solution.reverse(-123)<<endl;
	return 0;
}

