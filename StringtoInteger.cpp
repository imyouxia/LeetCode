#include <iostream>
#include <cctype>
#include <climits>

using namespace std;

class Solution
{
public:
	int atoi(const char *str)
	{
		if(str == NULL)
			return 0;
		while(*str == ' ')
			str++;
		bool positive = true;
		if(*str == '+')
			str++;
		else if(*str == '-')
		{	
			str++;
			positive = false;
		}
		long long value = 0;
		while(isdigit(*str))
		{
			value = value * 10 + (*str - '0');
			str++;
		}
		
		value = positive ? value : -value;
		
		if(value > INT_MAX)
			return INT_MAX;
		if(value < INT_MIN)
			return INT_MIN;
		return (int)value;
	}
};

int main()
{
	Solution solution;
	cout<<solution.atoi("-123")<<endl;
	return 0;
}

