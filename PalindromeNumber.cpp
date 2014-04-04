#include <iostream>

using namespace std;

class Solution
{
public:
	bool isPalindrome(int x)
	{
		if(x < 0)
			return false;
		return x == reverse(x);	
	}
	
	int reverse(int x)
	{
		int value = 0;
		while(x)
		{
			value = value * 10 + x % 10;
			x = x / 10;
		}
		return value;
	}
};


int main()
{
	Solution solution;
	cout<<solution.isPalindrome(12321)<<endl;
	cout<<solution.isPalindrome(1232)<<endl;
	return 0;
}

